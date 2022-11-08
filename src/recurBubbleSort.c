#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000000

#include "recurBubbleSort.h"


/*/ A function to implement bubble sort*/
 void bubbleSort(int  *arr, int n)
{
    printf("*");
    int i;
    int temp;
    /*/ Base case*/
    if (n == 1)
        return;

    int count = 0;
    /*/ One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.*/
    for (i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }

      /*/ Check if any recursion happens or not
      // If any recursion is not happen then return*/
      if (count==0)
           return;

    /*/ Largest element is fixed,
    // recur for remaining array*/
    bubbleSort(arr, n-1);
    /*/free(arr);*/
}
