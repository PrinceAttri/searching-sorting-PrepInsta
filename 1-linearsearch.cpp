#include <iostream>
using namespace std;

void linearSearch(int arr[], int len, int item) {
    for(int i = 0; i<len; i++) {
        if(arr[i]==item) {
            cout << "Element is present at index: " << i;
            return;
        }
    }
    cout << "ELement is not present!";
}

int main() {
    int arr[] = {3, 5, 7, 9, 12, 15, 16, 18, 19, 22};
    int len = sizeof(arr)/sizeof(arr[0]);
    int item;
    cout << "Enter the item: ";
    cin >> item;

    linearSearch(arr, len, item);
}