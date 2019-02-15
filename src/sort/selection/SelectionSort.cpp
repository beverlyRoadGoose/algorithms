//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#include "SelectionSort.h"

template <typename T>
T * SelectionSort<T>::sortArray(T * array, int size) {
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
