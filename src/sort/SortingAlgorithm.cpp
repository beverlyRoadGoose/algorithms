//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#include "SortingAlgorithm.h"

template<typename T>
bool SortingAlgorithm<T>::arrayIsSorted(T * array, int size) {
  for (int i = 0; i < size - 1; ++i) {
    if (array[i] > array[i + 1])
      return false;
  }
  return true;
}