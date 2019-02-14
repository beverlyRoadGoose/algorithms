//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#ifndef ALGORITHMS_SELECTION_SORT_H
#define ALGORITHMS_SELECTION_SORT_H

#include <src/sort/SortingAlgorithm.h>

template <typename T>
class SelectionSort : public SortingAlgorithm<T> {
public:
  SelectionSort() = default;
  ~SelectionSort() = default;
  T * sortArray(T * array, int size) override;
};



#endif //ALGORITHMS_SELECTION_SORT_H
