#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000000

#include "recurBubbleSort.h"
#include "mergeSort.h"
#include "shellSort.h"
#include "quickSort.h"
#include "utils.h"

void menu(int op);

static int numerosOriginal[MAX];
static int copyNum[MAX];


int main(){
    int op = 0;

    llenarNumeros(numerosOriginal);

    do{
    menu(op);
    }while(op!=5);

    return 0;
}
void menu(int op){
    int n;
    unsigned cTime1, cTime2;
    printf("1. BubbleSort Recursivo\n");
    printf("2. MergeSort Recursivo\n");
    printf("3. ShellSort Recursivo\n");
    printf("4. QuickSort Recursivo\n");
    printf("5. Mostrar Arreglo Original\n");
    printf("6. Mostrar Arreglo Ordenado\n");
    scanf("%d", &op);
    switch(op)
        {
            case 1:
                printf("\n\n--Algoritmo Burbuja Recursivo--\n\n ");
                printf("\nIngrese el tamaño de entrada: ");
                scanf("%d", &n);
                copiarArreglo(numerosOriginal, copyNum);
                cTime1 = clock();
                bubbleSort(copyNum, n);
                cTime2 = clock();
                printf("\n\n Tiempo total de ejecucion: %.22f", (double)(cTime2 - cTime1)/ CLOCKS_PER_SEC);
                printf("\n\n");
                system("pause");
                system("cls");
                break;

            case 2:
                printf("\n\n--Algoritmo MergeSort--\n\n ");
                printf("\nIngrese el tamaño de entrada: ");
                scanf("%d", &n);
                copiarArreglo(numerosOriginal, copyNum);
                cTime1 = clock();
                mergeSort(copyNum, 0, n-1);
                cTime2 = clock();
                printf("\n\n Tiempo total de ejecucion: %.22f", (double)(cTime2 - cTime1)/ CLOCKS_PER_SEC);
                system("pause");
                system("cls");
                break;

            case 3:
                printf("\n\n--Algoritmo shellSort--\n\n ");
                printf("\nIngrese el tamaño de entrada: ");
                scanf("%d", &n);
                copiarArreglo(numerosOriginal, copyNum);
                cTime1 = clock();
                shellSort(copyNum, n);
                cTime2 = clock();
                printf("\n\n Tiempo total de ejecucion: %.22f", (double)(cTime2 - cTime1)/ CLOCKS_PER_SEC);
                system("pause");
                system("cls");
                break;

            case 4:
                printf("\n\n--Algoritmo quickSort--\n\n ");
                printf("\nIngrese el tamaño de entrada: ");
                scanf("%d", &n);
                copiarArreglo(numerosOriginal, copyNum);
                cTime1 = clock();
                quickSort(copyNum, 0, n-1);
                cTime2 = clock();
                printf("\n\n Tiempo total de ejecucion: %.22f", (double)(cTime2 - cTime1)/ CLOCKS_PER_SEC);
                system("pause");
                system("cls");
                break;

            case 5:
                printf("\n\n  --Arreglo original--\n\n");
                mostrarArreglo(numerosOriginal, n);
                system("pause");
                break;

            case 6:
                printf("\n\n  --Arreglo ordenado--\n\n");
                mostrarArreglo(copyNum, n);
                system("pause");
                system("cls");
                break;

            default:
                printf("Error! operator is not correct");
                system("pause");
        }
}
