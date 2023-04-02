#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int item) {
    if(r>=l) {
        int m = (l+r)/2;
        if(arr[m] == item) {
            return m;
        }
        else if(arr[m] < item) {
            l = m+1;
            return binarySearch(arr, l, r, item);
        }
        else {
            r = m-1;
            return binarySearch(arr, l, r, item);
        }
    }
    else {
        return -1;
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 12, 15, 16, 18, 19, 22};
    int item;
    cout << "Enter the item: ";
    cin >> item;
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, l, r, item);
}