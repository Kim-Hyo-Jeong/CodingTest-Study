#include <stdio.h>

int main()
{
    int n;
    long long result = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        result *= i;

    printf("%lld\n", result);
    return 0;
}
