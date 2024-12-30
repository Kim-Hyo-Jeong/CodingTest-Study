#include <stdio.h>
#include <stdlib.h>

// 비교 함수
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int *arr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // 퀵 정렬
    qsort(arr, N, sizeof(int), compare);

    // K번째 수 출력
    printf("%d", arr[K - 1]);

    free(arr);
    return 0;
}
