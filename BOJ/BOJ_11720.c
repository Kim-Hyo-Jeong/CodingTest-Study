#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    char str[N];
    scanf("%s", str);

    int sum = 0;

    for (int i = 0; i < N; i++)
        sum += str[i] - '0';
    // 문자 '0'의 ASCII 값은 48이므로 str[i] - '0'를 하면 해당 문자를 숫자로 변환할 수 있음

    printf("%d\n", sum);

    return 0;
}