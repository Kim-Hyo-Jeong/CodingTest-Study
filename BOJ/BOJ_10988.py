# 문자열 입력받기
str = input()

# 문자열이 팰린드롬인지 확인
if str == str[::-1]:
    print(1)
else:
    print(0)
