#include <iostream>

#include "bubbleSort.hpp"

using namespace std;

int main() {
        const int arrSize = 8;
        int arr[arrSize] = {-6, 12, 0, 1024, -44, -122, 2, 15};

        int* arr1 = bubbleSort(arr, arrSize);

        cout << "Bubble Sort\n" << endl;

        cout << "Unsorted array:\t";

        for(int i = 0; i < arrSize; i++) {
                cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Sorted array:\t";

        for(int i = 0; i < arrSize; i++) {
                cout << arr1[i] << " ";
        }
        cout << endl;

        return 0;
}