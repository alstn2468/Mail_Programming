
# 주어진 정수가 4의 거듭제곱인지 확인하시오.
#
# Given an integer, check if it is a power of 4.

num = input()

if int(num) % 4 == 0:
    if len(num) >= 3:
        if num[:-1] == 0 and num[:-2] == 0:
            print("This num is 4's square")

        else:
            print("This num is not 4's square")

    else:
        print("This num is 4's square")

else:
    print("This num is not 4's square")


'''
어... 예외 발견
'''
