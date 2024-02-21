#include <iostream>
using namespace std;

void swap(int*, int*);
void sortArray(int*, int);

int main() {

    int n = 5;
    int arr[5] = {1,2,3,4,5};
    cout << "Sorting..." << endl;
    sortArray(arr, n);
    cout << "Array is sorted now..." << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] <= arr[j]) {
                continue;
            } else {
                swap(arr+i, arr+j);
            }
        }
    }
}

