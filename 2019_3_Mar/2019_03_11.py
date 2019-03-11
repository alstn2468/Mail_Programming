
# 주어진 정수가 4의 거듭제곱인지 확인하시오.
#
# Given an integer, check if it is a power of 4.

num = int(input())

while True:
    num = bin(num)[2:]

    if len(num) <= 3:
        if num == '100':
            print("This num is 4's square")

        else:
            print("This num is not 4's square")

        break

    elif len(num) > 3:
        num = int(num, 2) >> 2
