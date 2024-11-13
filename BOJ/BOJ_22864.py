A, B, C, M = map(int, input().split())

tired = 0
work = 0

for hour in range(24):
    # 현재 피로도에 A를 더해도 M 이하라면 일함
    if tired + A <= M:
        tired += A
        work += B
    else:
        tired -= C
        # 피로도가 음수가 되지 않도록 설정
        if tired < 0:
            tired = 0

print(work)