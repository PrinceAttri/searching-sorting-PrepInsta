#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a  = *b;
    *b = temp;
}

void display(int arr[], int end) {
    for(int i = 0; i<end; i++) {
        cout << arr[i] << " ";
    }
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int swapIndex = start;                         //set swapIndex as start initially
    for(int i = start; i<end; i++) {
        if(arr[i] < pivot) {
            swap(&arr[swapIndex], &arr[i]);        //swap if element is lesser than pivot
            swapIndex++;
        }
    }
    swap(&arr[swapIndex], &arr[end]);             //swap pivot value with element at swapIndex
    return swapIndex;
}

void quickSort(int arr[], int start, int end) {
    if(start <= end) {
        int swapIndex = partition(arr, start ,end); //calling partition
        
        quickSort(arr, start, swapIndex-1);
        quickSort(arr, swapIndex+1, end);
    }
    else {
        return;
    }
}

int main() {
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int end = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sort: ";
    display(arr, end);
    cout << endl;

    quickSort(arr, 0, end-1);

    cout << "Array after sort: ";
    display(arr, end);
}