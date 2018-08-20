/*
	*
	* 정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오.
	* 팰린드롬이란, 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다.
	* 단, 정수를 문자열로 바꾸면 안됩니다.
	*
	* 예제)
	* Input: 12345
	* Output: False
	*
	* Input: -101
	* Output: False
	*
	* Input: 11111
	* Output: True
	*
	* Input: 12421
	* Output: True
  *
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int IsNumPalindrome(int num)
{
	if (num < 0 || (num % 10 == 0 && num != 0))
	{
		return  FALSE;
	}
	int reversedHalf = 0;

	while (num > reversedHalf)
	{
		reversedHalf = reversedHalf * 10 + num % 10;
		num /= 10;
	}

	if (num == reversedHalf || num == (reversedHalf / 10))
		return TRUE;
	else
		return FALSE;
}

int main()
{
	int num1 = 12345;
	int num2 = -101;
	int num3 = 11111;
	int num4 = 12421;

	if (IsNumPalindrome(num1))
		printf("%6d는 팰린드롬 입니다.\n", num1);
	else
		printf("%6d는 팰린드롬이 아닙니다.\n", num1);

	if (IsNumPalindrome(num2))
		printf("%6d는 팰린드롬 입니다.\n", num2);
	else
		printf("%6d는 팰린드롬이 아닙니다.\n", num2);

	if (IsNumPalindrome(num3))
		printf("%6d는 팰린드롬 입니다.\n", num3);
	else
		printf("6%d는 팰린드롬이 아닙니다.\n", num3);

	if (IsNumPalindrome(num4))
		printf("%6d는 팰린드롬 입니다.\n", num4);
	else
		printf("%6d는 팰린드롬이 아닙니다.\n", num4);

	// 시간 복잡도 : O(log n)
	// 공간 복잡도 : O(1)

	return 0;
}
