#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(const char *number, int k);

int main(void)
{
    const char *number = "1924";
    int k = 2;
    char *result = solution(number, k);
    printf("%s\n", result);
    free(result);
    return 0;
}

char *solution(const char *number, int k)
{
    // len : 숫자의 길이
    int len = strlen(number);

    // target_len : k개의 수를 제거한 숫자의 길이
    int target_len = len - k;

    // answer : 최종 결과를 저장할 배열
    char *answer = (char *)malloc(target_len + 1);
    int top = -1;

    // number의 각 문자를 스택처럼 answer 배열에 저장
    for (int i = 0; i < len; i++)
    {
        // 현재 문자(number[i])가 스택의 마지막 숫자보다 큰지 확인
        while (top >= 0 && k > 0 && answer[top] < number[i])
        {
            top--;
            k--;
        }

        // 스택이 가득 차지 않은 경우 현재 문자(number[i])를 스택에 추가
        if (top < target_len - 1)
        {
            answer[++top] = number[i];
        }
    }

    answer[target_len] = '\0'; // 문자열 끝 표시
    return answer;
}