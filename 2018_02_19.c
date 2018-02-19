/*
	*
	*	정수 배열과 타겟 숫자가 주어지면, 합이 타겟값이 되는 두 원소의 인덱스를 찾으시오.
	*	단, 시간복잡도 O(n) 여야 합니다.
	*
	*	예제)
	*	Input: [2, 5, 6, 1, 10], 타겟 8
	*	Output: [0, 2] // 배열[0] + 배열[2] = 8
	*
*/

#include <stdio.h>

struct _hash
{
	int key;
	int value;
};

int main()
{
	int Input[5] = { 2, 5, 6, 1, 10 };
	int arr_size = sizeof(Input) / sizeof(int);
	int target = 8;
	struct _hash Hash[5];

	for (int i = 0; i < arr_size; i++)
	{
		Hash[i].key = target - Input[i];
		Hash[i].value = i;
	}

	for (int i = 0; i < arr_size; i++)
	{
		for (int j = 0; j < arr_size; j++)
		{
			if (Hash[i].key == Input[j])
			{
				printf("[ %d %d ] \n", Hash[j].key, Input[j]);  // 시간복잡도 O(n) 실패 ㅜㅜ
				return 0;
			}
		}
	}

	return 0;
}
