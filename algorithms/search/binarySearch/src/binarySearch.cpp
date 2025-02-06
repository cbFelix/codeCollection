#include <iostream>
using namespace std;

#include "binarySearch.hpp"

int binarySearch(int* array, const int arrSize, int target) {
        int firstIdx = 0;
        int lastIdx = arrSize - 1;

        while (firstIdx <= lastIdx) {
                int middleIdx = firstIdx + (lastIdx - firstIdx) / 2;
                if (array[middleIdx] == target) {
                        return middleIdx;
                } else if (array[middleIdx] < target) {
                        firstIdx = middleIdx + 1;
                } else {
                        lastIdx = middleIdx - 1;
                }
        }

        return -1;
}