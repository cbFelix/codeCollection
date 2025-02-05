#include "linearSearch.hpp"

int linearSearch(int* arr, const int arrSize, int target) {
        for(int i = 0; i < arrSize; i++) {
                if(arr[i] == target) {
                        return i;
                }
        }

        return -1;
}