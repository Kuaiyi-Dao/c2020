#include <stdio.h>
#include "Game.h"
int main() {
    int i, j;//ѭ������
    FILE * map = fopen("MapRes.txt", "r");
    if (map == NULL)
    {
        printf("file to open such file!\n");
        return -1;
    }
    int N, M;//��ͼ�Ĵ�С
    fscanf(map, "%d %d", &N, &M);
    int a[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
          fscanf(map, "%d", &a[i][j]);
        }
    }
    ShowMap(a, N, M);
    fclose(map);
    return 0;
}
