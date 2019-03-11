
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

'''
비트 연산자를 사용해 해결해보았다.
4의 배수일 경우에 2진수로 바꾼 숫자의 길이가 3이 될 경우
100으로 값이 고정이 되어야 한다.
따라서, 모든 수를 길이가 3보다 작거나 같을 때까지 비트연산자를 진행하고
위의 조건에 충족했을때 2진수의 값이 100인지 확인하는 방식으로 진행하였다.
Python 내부 구현 함수를 제외하고 While Loop 하나만 사용하였으므로
시간복잡도는 O(n)이 될 것 같다.
아래의 예시로 값의 변화를 설명해보도록 하겠다.

Input : 16
num = bin(num)[2:] = "10000", len(num) = 5
-> elif문 진행
num = 16 >> 2 = 4
bin(num)[2:] = "100", len(num) = 3
-> if문 진행
num == '100' -> True
Output : "This num is 4's square"

Input : 17
num = bin(num)[2:] = "10001"``
'''
