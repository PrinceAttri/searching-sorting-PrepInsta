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

void bubbleSort(int arr[], int len) {
    for(int i = 0; i<len-1; i++) {
        bool isSwapped = false;
        for(int j = 0; j<len-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false) {
            break;
        }
    }
}

int main() {
    int arr[] = {10, 2, 8, 16, 18};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Array before sort: ";
    display(arr, len);
    cout << endl;

    bubbleSort(arr, len);

    cout << "Array after sort: ";
    display(arr, len);
}