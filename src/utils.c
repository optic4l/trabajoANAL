#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000000

#include "utils.h"

void llenarNumeros(int *arr){
    int i;
    for(i = 0; i < MAX; i++){
        arr[i] = rand() % MAX;
    }
}

void mostrarArreglo(int *arr, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d - ", arr[i]);
    }
    printf("\n\n");
}



void copiarArreglo(int *arr1, int *arr2){
    int i;
    for(i = 0; i < MAX; i++){
        arr2[i] = arr1[i];
    }
}


