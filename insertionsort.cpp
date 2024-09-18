#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

    
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12,15,8,4,20,18,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"abhishekkashyap"<<endl;

    cout << "before array==";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "after array== ";
    printArray(arr, n);

    return 0;
}



