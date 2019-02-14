//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#ifndef ALGORITHMS_BINARY_SEARCH_H
#define ALGORITHMS_BINARY_SEARCH_H

template <typename T>
class BinarySearch {
public:
  /**
   * Binary search through an array.
   *
   * @param array The sorted array to search through.
   * @param size The size of the array.
   * @param value The value to search for.
   * @return The index if the value is found, -1 if it isn't.
   */
  int searchArray(T * array, int size, T value);
};

#endif //ALGORITHMS_BINARY_SEARCH_H
