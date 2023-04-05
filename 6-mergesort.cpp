#include <iostream>
using namespace std;

void display(int arr[], int len) {
    for(int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int start, int mid, int end) {
    int n1 = (mid+1) - (start);
    int n2 = end-mid; //since (end+1)-(mid+1) = end-mid

    int L[n1], R[n2];
    //copying elements into left subarray
    for(int i = 0; i<n1; i++) {
        L[i] = arr[start+i];
    }
    //copying elements into right subarray
    for(int j = 0; j<n2; j++) {
        R[j] = arr[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while(i<n1 && j<n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            k++;
        }
        else {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    //if elements are remaining in the left subarray and right subarray is completed
    while(i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    //if elements are remaining in the right subarray and left subarray is completed
    while(j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int start, int end){
    if(start >= end) {
        return;
    }
    int mid = (start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {72, 50, 10, 44, 20, 8, 15};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    display(arr, len);
    cout << endl;

    mergeSort(arr, 0, len-1);
    cout << "Array after sorting: ";
    display(arr, len);
}