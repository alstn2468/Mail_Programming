/*
	*
	* 정수 n이 주어지면, n개의 여는 괄호 “(“와 n개의 닫는 괄호 “)”로 만들 수 있는 괄호 조합을 모두 구하시오.
	* (시간 복잡도 제한 없습니다).
	*
	* 예제)
	* Input: 1
	* Output: [“()”]
	*
	* Input: 2
	* Output: [“(())”, “()()”]
	*
	* Input: 3
	* Output: [“((()))”, “(()())”, “()(())”, “(())()”, “()()()”]
	*
*/

#include <stdio.h>

int Left = 1;
int Right = 2;

void MakeBracket(int arr[], int arr_size)
{
	printf("[ ");
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] == Left)
			printf("(");
		else
			printf(")");
	}
	printf(" ]");
}

void CheckBracket(int arr[], int arr_size, int open, int close)
{
	if (open == 0 && close == 0)
	{
		MakeBracket(arr, arr_size);
		return;
	}

	if (open > 0)
	{
		arr[arr_size] = Left;
		CheckBracket(arr, arr_size + 1, open - 1, close + 1);
	}

	if (close > 0)
	{
		arr[arr_size] = Right;
		CheckBracket(arr, arr_size + 1, open, close - 1);
	}
}

int main()
{
	int num;
	int arr[100] = { 0 };

	num = 1;
	printf("%d개의 ( 와 %d개의 )로 만들수 있는 괄호 조합 : ", num, num);
	CheckBracket(arr, 0, num, 0);
	printf("\n");

	num = 2;
	printf("%d개의 ( 와 %d개의 )로 만들수 있는 괄호 조합 : ", num, num);
	CheckBracket(arr, 0, num, 0);
	printf("\n");

	num = 3;
	printf("%d개의 ( 와 %d개의 )로 만들수 있는 괄호 조합 : ", num, num);
	CheckBracket(arr, 0, num, 0);
	printf("\n");

	return 0;
}
