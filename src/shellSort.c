#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000000

#include "shellSort.h"


/*/ Shell sort*/
void shellSort(int *arr, int n) {
  printf("*");
  /*/ Rearrange elements at each n/2, n/4, n/8, ... intervals*/
  int interval, i;
  for (interval = n / 2; interval > 0; interval /= 2) {
    for (i = interval; i < n; i += 1) {
      int temp = arr[i];
      int j;
      for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
        arr[j] = arr[j - interval];
      }
      arr[j] = temp;
    }
  }
}

