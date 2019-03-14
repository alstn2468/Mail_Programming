
# 주어진 정수가 4의 거듭제곱인지 확인하시오.
#
# Given an integer, check if it is a power of 4.

def is_power_of_four(num):
    if num == 0:
        return False

    while num != 1:
        if num % 4 != 0:
            return False

        num = num // 4

    return True

num = int(input())

if is_power_of_four(num):
    print("This num {} is power of 4".format(num))

else:
    print("This num {} is not power of 4".format(num))
