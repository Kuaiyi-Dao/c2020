#include <stdio.h>
#include <string.h>
#define MAX_NUM 10

//ʵ�����µĲ˵���������ѡ��˵����ܣ���
//��ʾ����б�
//���
//����
//�˳�����
//ʵ�ֲ˵���Ӧ���ܣ����¼������ͺš���������Ϣ����
//��������ʱ���ļ��ж�ȡ��ǰ������ݣ��˳�ʱ���������ݣ�
 typedef struct Storages{
    char name[50];
    char type[4];
    int Amount;
    
}store;
void Menu();

void LoadFileInfo(store* MyStores, FILE* myStorage);


int main() {
    int choice;
    FILE* Storage = fopen("myStorage", "ab");
    if (Storage == NULL)
    {
        printf("fail to open this file!");
        return 0;
    }
    store * MyStores;
    while (1){
        Menu();
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                return 0;
                break;
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

void LoadFileInfo(store* MyStores, FILE* myStorage){
    while (myStorage != EOF)
    {

    }
}