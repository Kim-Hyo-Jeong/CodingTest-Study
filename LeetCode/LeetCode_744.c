#include <stdio.h>

// target보다 크고 가장 작은 문자를 찾는 함수
char nextGreatestLetter(char *letters, int lettersSize, char target)
{
    int start = 0, end = lettersSize - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        // target보다 큰 문자를 찾는 과정
        if (letters[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return letters[start % lettersSize];
}