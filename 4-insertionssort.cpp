#include <iostream>
using namespace std;

void display(int arr[], int len) {
    for(int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int len) {
    for(int i = 1; i<len; i++) {
        int target = arr[i];
        int j = i-1;
        for(; j>=0 && target < arr[j]; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = target;
    }
}

int main() {
    int arr[] = {8, 6, 4, 20, 24, 2, 10, 12};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sort: ";
    display(arr, len);
    cout << endl;

    insertionSort(arr, len);

    cout << "Array after sort: ";
    display(arr, len);
}