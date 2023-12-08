#include <assert.h>
#include "quicksort.h"

void test1()
{
    const int size = 3;
    const int sorted[] = {1, 2, 3};

    int unsorted[] = {3, 2, 1};
    quickSort(unsorted, size);

    for (int i = 0; i < size; i++)
    {
        assert(sorted[i] == unsorted[i]);
    }
}

void test2()
{
    const int size = 5;
    const int sorted[] = {1, 2, 3, 4, 5};

    int unsorted[] = {3, 5, 1, 2, 4};
    quickSort(unsorted, size);

    for (int i = 0; i < size; i++)
    {
        assert(sorted[i] == unsorted[i]);
    }
}

void test3()
{
    const int size = 5;
    const int sorted[] = {1, 2, 3, 4, 5};

    int unsorted[] = {1, 2, 3, 4, 5};
    quickSort(unsorted, size);

    for (int i = 0; i < size; i++)
    {
        assert(sorted[i] == unsorted[i]);
    }
}

int main()
{
    test1();
    test2();
    test3();
    return 0;
}