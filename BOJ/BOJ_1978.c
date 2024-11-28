#include <stdio.h>
#include <math.h>

// 소수 판별 함수
int is_prime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int count = 0;

    for (int i = 0; i < N; i++)
        if (is_prime(arr[i]))
            count++;

    printf("%d\n", count);

    return 0;
}
