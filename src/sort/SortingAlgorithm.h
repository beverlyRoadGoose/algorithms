//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#ifndef ALGORITHMS_SORTING_ALGORITHM_H
#define ALGORITHMS_SORTING_ALGORITHM_H

template <typename T>
class SortingAlgorithm {
public:
  SortingAlgorithm() = default;
  ~SortingAlgorithm() = default;
  virtual T * sortArray(T * array, int size) = 0;
  bool arrayIsSorted(T * array, int size);
};

#endif //ALGORITHMS_SORTING_ALGORITHM_H
