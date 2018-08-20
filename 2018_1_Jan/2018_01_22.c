/*
	*
	* 정수 배열(int array)가 주어지면 가장 큰 이어지는 원소들의 합을 구하시오. 단, 시간복잡도는 O(n).
	*
	* 예제}
	* Input: [-1, 3, -1, 5]
	* Output: 7 // 3 + (-1) + 5
	*
	* Input: [-5, -3, -1]
	* Output: -1 // -1
	*
	* Input: [2, 4, -2, -3, 8]
	* Output: 9 // 2 + 4 + (-2) + (-3) + 8
	*
*/

#include <stdio.h>
#define Max(x, y)  ((x)>(y))?(x):(y)

int Sol(int arr[], int arr_lenght)
{
	int maxSum = arr[0];
	int currentSum = 0;

	for (int i = 0; i <= arr_lenght; i++)
	{
		currentSum = Max(currentSum + arr[i], arr[i]);
		maxSum = Max(currentSum, maxSum);
	}

	return maxSum;
}

int main()
{
	int arr1[4] = { -1, 3, -1, 5 };
	int arr2[3] = { -5, -3, -1 };
	int arr3[5] = { 2, 4, -2, -3, 8 };

	printf("%d\n", Sol(arr1, sizeof(arr1) / sizeof(int) - 1));
	printf("%d\n", Sol(arr2, sizeof(arr2) / sizeof(int) - 1));
	printf("%d\n", Sol(arr3, sizeof(arr3) / sizeof(int) - 1));

	// 시간 복잡도 : O(n)
	// 공간 복잡도 : O(1)

	return 0;
}
