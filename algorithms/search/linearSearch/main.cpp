#include "linearSearch.hpp"

#include <iostream>

using namespace std;

int main() {
        const int arrSize = 16;
        int arr[arrSize] = {-15, 24, 0, 1000, 2, -45, -77, 1, -212, 92, 52, -1, -63, 12, 4, 13};

        int idx = linearSearch(arr, arrSize, 92);

        cout << idx << endl;

        return 0;
}