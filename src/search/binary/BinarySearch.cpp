//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#include "BinarySearch.h"

template <typename T>
int BinarySearch<T>::searchArray(T * array, int size, T value) {
  /*
   * Index of the lowest item
   */
  int low = 0;

  /*
   * Index of the highest item
   */
  int high = size - 1;

  /*
   * Index of the middle item
   */
  int mid;

  /*
   * The value of the current middle item
   */
  T key;

  while (low <= high) { // while we still have a range to search through
    mid = (low + high) / 2;
    key = *(array + mid);

    if (key == value) return mid;
    if (key > value) high = mid - 1;
    else low = mid + 1;
  }

  return -1;
}