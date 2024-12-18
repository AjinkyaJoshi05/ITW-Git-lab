#include <stdio.h>
// make an array of numbers
// write a function for selection sort
// sort the array using selection sort

// function for insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// function to print the array
void print(int arr[],int n){
    printf("Array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    printf("Insertion sort\n");
    int arr[7] = {3,7,12,4,8,1,5};
    int n= 7;
    printf("Initial array: ");
    print(arr,n);
    insertionSort(arr,n);
    printf("\nSorted array: ");
    print(arr,n);
    return 0;
}
