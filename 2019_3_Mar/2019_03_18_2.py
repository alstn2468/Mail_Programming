
# 1~N 까지 있는 정수 배열에 원소 하나가 없어졌습니다. 없어진 원소의 값을 구하시오.
#
# Given an integer array of 1~N except one number, find the missing integer.

import random

arr = [x for x in range(100)]

print("- Before Integer Array -")

for i, val in enumerate(arr):
    print(" %3d |" % val, end="")

    if (i + 1) % 10 == 0:
        print()

before = sum(arr)

arr.remove(random.randrange(100))

misiing_one_val_in_arr = arr
missing_val = before - sum(misiing_one_val_in_arr)

print("\nThis is Missing Integer :", before - sum(misiing_one_val_in_arr), "\n")

print("- After Integer Array -")

for i, val in enumerate(misiing_one_val_in_arr):
    if i == missing_val:
        print("     | %3d |" % val, end="")
    else:
        print(" %3d |" % val, end="")

    if (i + 1) % 10 == 0:
        print()

print()
