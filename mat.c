#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func()
{
    int mat[7][5];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            mat[i][j] = rand()%100-50;
	    printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int N = 5, M = 7;
    int posi, posj;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)//поиск отрицательного числа
            {
                posi = i;
                posj = j;//запоминание позиции первого отрицательного числа
                break;
            }
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if ((mat[i][j] < 0) && (mat[i][j] > mat[posi][posj]))//поиск наибольшего отрицательного числа
            {
                posi = i;
                posj = j;//запоминание его позиции
            }
        }
    }
    printf("Max negativ elem: %d\n", mat[posi][posj]);
}
