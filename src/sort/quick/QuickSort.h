#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <src/sort/SortingAlgorithm.h>

template <typename T>
class QuickSort : public SortingAlgorithm<T> {
    public:
        QuickSort() = default;
        ~QuickSort() = default;
        T * sortArray(T * array, int size) override;
        T * sortArrayRecursively(T * array, const int size);
};

#endif //QUICK_SORT_H
