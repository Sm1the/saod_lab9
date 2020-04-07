#include <stdio.h>
#include <stdlib.h>
#include "func.cpp"
#include <windows.h>
#include <iostream>
#include <time.h>

const int n=500;
int main()
{
    srand(time(NULL));
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 11));
    setlocale(LC_ALL, "Russian");
    int i,a[n],m;
    int trud1,trud2,trud3;
    

///----Таблица---------------///
    printf("|-                    HeapSort               -|\n");
    printf("+------+------------+------------+------------+\n");
    printf("|  n   |  FillInc   |  FillDec   |  FillRand  |\n"); m=100; FillInc(a,m); HeapSort(a,m); trud1=M+C; FillDec(a,m); HeapSort(a,m); trud2=M+C;
    printf("+------+------------+------------+------------+\n");FillRand(a,m); HeapSort(a,m); trud3=M+C;
    printf("|  100 |  %6d    |  %6d    |  %6d    |\n",trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n"); m=200; FillInc(a,m); HeapSort(a,m); trud1=M+C; FillDec(a,m); HeapSort(a,m); trud2=M+C; FillRand(a,m); HeapSort(a,m); trud3=M+C;
    printf("|  200 |  %6d    |  %6d    |  %6d    |\n",trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n"); m=300; FillInc(a,m); HeapSort(a,m); trud1=M+C; FillDec(a,m); HeapSort(a,m); trud2=M+C; FillRand(a,m); HeapSort(a,m); trud3=M+C;
    printf("|  300 |  %6d    |  %6d    |  %6d    |\n",trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n"); m=400; FillInc(a,m); HeapSort(a,m); trud1=M+C; FillDec(a,m); HeapSort(a,m); trud2=M+C;  FillRand(a,m); HeapSort(a,m); trud3=M+C;
    printf("|  400 |  %6d    |  %6d    |  %6d    |\n",trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n"); m=500; FillInc(a,m); HeapSort(a,m); trud1=M+C; FillDec(a,m); HeapSort(a,m); trud2=M+C; FillRand(a,m); HeapSort(a,m); trud3=M+C;
    printf("|  500 |  %6d    |  %6d    |  %6d    |\n",trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
}

