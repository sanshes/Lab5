#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

void func()
{
    int mas[23];
    int i;
    for (i = 0; i < 23; i++)
    {
        mas[i] = rand()%100-50;
        printf("%d ", mas[i]);
    }
    int N = 23;
    int pos;
    for (i = 0; i < N; i++)
    {
        if (mas[i] < 0)//поиск отрицательного числа
        {
            pos = i;//запоминание позиции первого отрицательного числа
            break;
        }
    }

    for (i = 0; i < N; i++)
    {
        if ((mas[i] < 0) && (mas[i] > mas[pos]))//поиск наибольшего отрицательного числа
            pos = i;//запоминание его позиции
    }
    printf("Max negativ elem: %d\n", mas[pos]);
}
