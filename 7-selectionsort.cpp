#include <iostream>
using namespace std;

void display(int arr[], int len) {
    for(int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int len) {
    for(int i = 0; i<len-1; i++) {
        int min_index = i;
        for(int j = i+1; j<len; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main() {
    int arr[] = {72, 50, 10, 44, 20, 8, 15};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    display(arr, len);
    cout << endl;

    selectionSort(arr, len);
    cout << "Array after sorting: ";
    display(arr, len);
}