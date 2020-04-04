#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 1

 typedef struct Storages{
    char name[20];
    char type[10];
    int Amount;
    struct store * nextNode;
}store;
void Menu();

void LoadGoodsInfo(store * Head);

void WriteInInfo(store * Head);

void ShowGoodInfo(store * Head);

void PushGoodIN(store * Head);

store* PopGoodOut(store * Head);

int SearchGoods(char * name, char * type, store* Head);

int IsExists(char* name, char* type, int account, store* Head);

store* CreateSave();

int main() {
    int choice;
    store * Head = CreateSave();
    LoadGoodsInfo(Head);
    while (1) {
        Menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                ShowGoodInfo(Head);
                break;
            case 2:
                PushGoodIN(Head);
                break;
            case 3:
                Head = PopGoodOut(Head);
                break;
            case 4:
                WriteInInfo(Head);
                return 0;
            default:
                printf("���������룺\n");
                break;
        }
    }
}

void Menu()
{
printf("Menu:\n");
printf("1.��ʾ����б�\n");
printf("2.���\n");
printf("3.����\n");
printf("4.�˳�����\n");
}
//�����洢����
store* CreateSave(){
    int i;
    store * HeadNode = (store*)malloc(sizeof(store));
    strcpy(HeadNode->name, "��");
    strcpy(HeadNode->type, "��");
    HeadNode->Amount = 0;
    HeadNode->nextNode = NULL;
    for (i = 0; i < MAX_NUM; i++){
        store* Node = (store*)malloc(sizeof(store));
        strcpy(Node->name, "��");
        strcpy(Node->type, "��");
        Node->Amount = 0;
        Node->nextNode = HeadNode->nextNode;
        HeadNode->nextNode = Node;
    }
    return HeadNode;
}
//��ȡ�ļ�������Ϣ
void LoadGoodsInfo(store * Head){
    int r;
    FILE* Storage = fopen("myStorage", "r");
    if (Storage == NULL)
    {
        printf("fail to open this file!\n(����4�˳���������������)\n");
        return 0;
    }

    while (feof(Storage) != EOF){
        r = fread(Head->name, sizeof(Head->name), 1, Storage);
        if(r < 1) break;
        fread(Head->type, sizeof(Head->type), 1, Storage);
        fread(&(Head->Amount), sizeof(Head->Amount), 1, Storage);
        if(feof(Storage) != EOF && Head->nextNode == NULL){
            store * Node = (store*)malloc(sizeof(store));
            Node->nextNode = NULL;
            Head->nextNode = Node;
            strcpy(Node->name, "��");
            strcpy(Node->type, "��");
            Node->Amount = 0;
        }
        Head = Head->nextNode;
    }
    fclose(Storage);
}
//д���ļ�����
void WriteInInfo(store * Head){
    FILE* Storage = fopen("myStorage", "w");
    if (Storage == NULL)
    {
        printf("fail to open this file!");
        return 0;
    }
    while(1){
        fwrite(Head->name, sizeof(Head->name), 1, Storage);
        fwrite(Head->type, sizeof(Head->type), 1, Storage);
        fwrite(&(Head->Amount), sizeof(Head->Amount), 1, Storage);
        if (Head->nextNode == NULL)
        {break;}
        Head = Head->nextNode;
    }
    fclose(Storage);
}
//��ʾ����б�
void ShowGoodInfo(store * Head){
    int i = 0;
    printf("\t��������\t\t�����ͺ�\t\t����\n");
    while (1){
        printf("%-3d\t%-24s%-24s%-4d\n",i+1, Head->name, Head->type, Head->Amount);
        if (Head->nextNode == NULL)
        {break;}
        Head = Head->nextNode;
        i++;
    }
}
//��⺯��
void PushGoodIN(store * Head){
    int JudeNum;
    store * Temp = Head;
    char name[20];
    char type[10];
    int account;
    printf("������������ƣ�\n");
    scanf("%s", name);
    printf("�����������ͺţ�\n");
    scanf("%s", type);
    printf("���������������\n");
    scanf("%d", &account);
    if (account<=0)
    {
        printf("��������С�ڵ���0�����������룺");
        scanf("%d", &account);
    }
    while (1){
        if(Head->Amount == 0)
        {
            JudeNum = IsExists(name, type, account, Temp);
            if (JudeNum == 0)
            { break;}
            strcpy(Head->name, name);
            strcpy(Head->type, type);
            Head->Amount = account;
            return;
        }

        if (Head->nextNode == NULL)
        {
            store * Node = (store*)malloc(sizeof(store));
            Node->nextNode = NULL;
            Head->nextNode = Node;
            strcpy(Node->name, name);
            strcpy(Node->type, type);
            Node->Amount = account;
            return;
        }
        Head = Head->nextNode;
    }
}
//����
store* PopGoodOut(store * Head){
    int i;
    int JudeNum;
    store * Temp = Head;
    char name[20];
    char type[10];
    int account;
    printf("������Ҫ����Ļ������ƣ�\n");
    scanf("%s", name);
    printf("������Ҫ����Ļ�����ͺţ�\n");
    scanf("%s", type);
    JudeNum = SearchGoods(name, type, Temp);
    if (JudeNum == -1)
    {
        printf("û��������\n");
        return;
    }
    printf("������Ҫ����������\n");
    scanf("%d", &account);
    for (i = 0; i + 1 < JudeNum; i++)
    {
        Head = Head->nextNode;
    }
    if (JudeNum == 0)
    {
        store * tempNode = Head;
        int Difference = tempNode->Amount - account;
        if (Difference <= 0)
        {
            if (Head->nextNode == NULL)
            {
                strcpy(Head->name, "��");
                strcpy(Head->type, "��");
                Head->Amount = 0;
                return Head;
            }
            Head = Head->nextNode;
            free(tempNode);
            return Head;
        }
        Head->Amount -=account;
        return tempNode;
    }
    store * tempNode = Head->nextNode;
    int Difference = tempNode->Amount - account;
    if (Difference <= 0){
        Head->nextNode = tempNode->nextNode;
        free(tempNode);
    }
    tempNode->Amount -= account;
    return Temp;
}

int SearchGoods(char * name, char * type, store* Head){
    int i = 0;
    while (1){
        if (!strcmp(name, Head->name) && !strcmp(type, Head->type)){
            return i;
        }
        i++;
        if(Head->nextNode == NULL)
        { break;}
        Head = Head->nextNode;
    }
    return -1;
}
//�ж���Ʒ�Ƿ��Ѿ�����
int IsExists(char* name, char* type, int account, store* Head){
    while (1){
        if (!strcmp(name, Head->name) && !strcmp(type, Head->type))
        {
            Head->Amount += account;
            return 0;
        }
        if(Head->nextNode == NULL)
        { break;}
        Head = Head->nextNode;
    }
    return -1;
}