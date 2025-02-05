#include <iostream>
using namespace std;

#include "binarySearch.hpp"

int binarySearch(int* array, const int arrSize, int target) {
        int* arr = new int[arrSize];

        //      bubble sort
        for (int i = 0; i < arrSize; i++) {
                arr[i] = array[i];
        }

        for(int i = 0; i < arrSize; i++) {
                for(int k = 1; k < arrSize; k++) {
                        // Simple bubble sort
                        if(arr[k - 1] > arr[k]) {
                                swap(arr[k - 1], arr[k]);
                        }
                }
        }

        //      
        int firstIdx = 0;
        int lastIdx = arrSize - 1;

        while (firstIdx <= lastIdx) {
                int middleIdx = firstIdx + (lastIdx - firstIdx) / 2;
                if (arr[middleIdx] == target) {
                        return middleIdx;
                } else if (arr[middleIdx] < target) {
                        firstIdx = middleIdx + 1;
                } else {
                        lastIdx = middleIdx - 1;
                }
        }

        return -1;
}