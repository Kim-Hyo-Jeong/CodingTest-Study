#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
    int start = 0, end = numsSize - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return start;
}

int main(void)
{
    int numsSize, target;

    printf("배열의 크기 입력: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    printf("배열의 요소 입력: ");
    for (int i = 0; i < numsSize; i++)
        scanf("%d", &nums[i]);

    printf("target 값 입력: ");
    scanf("%d", &target);

    int result = searchInsert(nums, numsSize, target);
    printf("%d\n", result);

    return 0;
}
