#include "bubbleSort.hpp"
#include <iostream>

using namespace std;

int* bubbleSort(int* array, int arrSize) {
        int* arr = new int[arrSize];
        for(int i = 0; i < arrSize; ++i) {
                arr[i] = array[i];
        }

        for(int i = 0; i < arrSize; ++i) {
                for(int k = 1   ; k < arrSize; ++k) {
                        if(arr[k-1] > arr[k]) {
                                swap(arr[k - 1], arr[k]);
                        }
                }
        }

        return arr;
}