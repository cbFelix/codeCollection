#include <iostream>
using namespace std;

#include "binarySearch.hpp"

int main() {
        const int arrSize = 16;
        int arr[arrSize] = {-15, 24, 0, 1000, 2, -45, -77, 1, -212, 92, 52, -1, -63, 12, 4, 12};

        int targetIdx = binarySearch(arr, arrSize,1000);

        cout << targetIdx << endl;

        return 0;
}