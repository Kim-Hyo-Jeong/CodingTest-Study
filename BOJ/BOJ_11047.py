# N: 동전의 종류 수, K: 총 금액
n, k = map(int, input().split())

# 동전 단위 입력
coins = [int(input()) for _ in range(n)]

cnt = 0

# 동전 단위를 내림차순으로 정렬
coins.sort(reverse=True)

# 단위가 큰 동전부터 사용
for coin in coins:
    cnt += k // coin
    k %= coin

print(cnt)  # 결과 출력
