# Simple Binary Search
**Binary search** is a classic **algorithm for searching for an element in a sorted array** (*vector*) using array splitting into halves. It is used in *computer science, computational mathematics, and mathematical programming.*

## Visual
![Binary Search](https://cdn-media-1.freecodecamp.org/images/BdVrmbkpWAEROeZzJh-WwglcO3ZvE92aE7Co)

## Algorithm 
- Determining the value of an element in the middle of a data structure. The resulting value is compared with the key.
- If the key is less than the value of the middle, the search is performed in the first half of the elements, otherwise in the second.
- The search boils down to the fact that the value of the middle element in the selected half is again determined and compared with the key.
- The process continues until an element with the value of the key is found or the search interval becomes empty.

*In my code, in the search function, I also added a built-in bubble sorter for arrays.*

## Practical part
The code is divided into 2 files:
- Header file `./include/binarySearch.hpp`
- Source file `./src/binarySearch.hpp`

The function itself is declared in the header file and implemented in the source file, has a function `binarySearch(int* array, const int arrSize, int target)` that takes **3** parameters:
- An array of integers
- The length of the array
- The number whose index we want to find.

**If the algorithm finds the number we need, it returns the index of this number in the array, otherwise it returns -1.**