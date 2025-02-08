# Simple bubble sort

Simple variant, only for integers.
Has 1 practical function `bubbleSort(int* array, int arrSize)`
- `int* array` - pointer to an array of integers.
- `int arrSize` - array size.

Returns a pointer to the new sorted array.

## Visual representation of the algorithm.
![Bubble sort. Visual. Image from Wikipedia.](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)


# Build
While in the root directory of this project, use this:
```sh
mkdir build
cd build
cmake ..
make
./bubbleSort
```