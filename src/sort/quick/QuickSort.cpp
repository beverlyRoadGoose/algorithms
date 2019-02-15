#include <iostream>
#include "QuickSort.h"

template <typename T>
T * QuickSort<T>::sortArray(T * array, int size) {
  for (int i = 0; i < size; ++i) {
    int minIndex = i;

    for (int j = i + 1; j < size; ++j) {
      if (array[j] < array[minIndex]) {
        int tmp = array[minIndex];
        array[minIndex] = array[j];
        array[j] = tmp;
      }
    }
  }

  return array;
}

template <typename T>
T * QuickSort<T>::sortArrayRecursively(T * array, const int size) {
    
    if (size <= 1) return array;

    const int leftArraySize = size/2;
    const int rightArraySize = size - (leftArraySize + 1);

    int sortedArray[size];
    int leftArray[leftArraySize];

    std::copy(array, array + leftArraySize, leftArray);

    int sortedLeftArray[leftArraySize] = sortArrayRecursively(leftArray, rightArraySize);
    std::copy(sortedLeftArray, sortedLeftArray + leftArraySize, sortedArray);
    sortedArray[size/2] = array[size/2];

    if (rightArraySize > 0) {
        int rightArray[rightArraySize];
        std::copy(array + leftArraySize + 1, array + leftArraySize + 1 + rightArraySize, rightArray);

        int sortedRightArray[rightArraySize] = sortArrayRecursively(rightArray, rightArraySize);
        std::copy(sortedRightArray, sortedRightArray + rightArraySize, sortedArray + leftArraySize + 2);
    }

    return sortedArray;
}
