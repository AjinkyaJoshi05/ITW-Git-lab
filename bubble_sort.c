#include <stdio.h>
#include <stdbool.h>

// function to swap
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function for bubble sort
void bubble_sort(int arr[], int n){
   int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

// main function
int main(){
    int arr[7] = {3,7,12,4,8,1,5};
    int n= 7;
    printf("Initial array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    bubble_sort(arr,n);
    printf("\nSorted array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}