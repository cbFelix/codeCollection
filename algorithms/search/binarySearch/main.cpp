#include <iostream>
using namespace std;

#include "binarySearch.hpp"

int main() {
        const int arrSize = 16;
        int arr[arrSize] = {-15, 24, 0, 1000, 2, -45, -77, 1, -212, 92, 52, -1, -63, 12, 4, 12};

        int* array = new int[arrSize];

        //      bubble sort
        for (int i = 0; i < arrSize; i++) {
                array[i] = arr[i];
        }

        for(int i = 0; i < arrSize; i++) {
                for(int k = 1; k < arrSize; k++) {
                        if(array[k - 1] > array[k]) {
                                swap(array[k - 1], array[k]);
                        }
                }
        }

        int targetIdx = binarySearch(array, arrSize,1000);

        cout << targetIdx << endl;

        return 0;
}