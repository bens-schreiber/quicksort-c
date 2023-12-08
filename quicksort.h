static void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

static int _partition(int *nums, int left, int right, const int pivot)
{
    while (left <= right)
    {
        while (nums[left] < pivot)
        {
            left++;
        }

        while (nums[right] > pivot)
        {
            right--;
        }

        if (left <= right)
        {
            _swap(&nums[left], &nums[right]);
            left++;
            right--;
        }
    }

    return left;
}

static void _quickSortImpl(int *nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = nums[(start + end) / 2];
    int index = _partition(nums, start, end, pivot);
    _quickSortImpl(nums, start, index - 1);
    _quickSortImpl(nums, index, end);
}

void quickSort(int *nums, int numsSize)
{
    _quickSortImpl(nums, 0, numsSize - 1);
}