/*
	*
	* 피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다.
	* 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.
	*
	* 예제)
	* Input: N = 12
	* Output: 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10
	*
*/

#include <stdio.h>

int evenFibSum(int num)
{
	int sum = 0;
	int fib1 = 1;
	int fib2 = 2;

	while (fib1 <= num)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		int fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	return sum;
}

int main()
{
	int num;

	num = 12;
	printf("%d보다 작은 모든 짝수 피보나치 수의 합 : %d\n", num, evenFibSum(num));
	/* 0 1 2 3 5 8 ... 2 + 8 = 10 */

	num = 40;
	printf("%d보다 작은 모든 짝수 피보나치 수의 합 : %d\n", num, evenFibSum(num));
	/* 0 1 2 3 5 8 13 21 34 ... 2 + 8 + 34 = 44 */

	return 0;
}
