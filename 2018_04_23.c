/*
    *
    *   문자열 배열(string array)이 주어지면, 제일 긴 공통된 접두사(prefix)의 길이를 찾으시오.
    *
    *   예제)
    *   Input: [“apple”, “apps”, “ape”]
    *   Output: 2 // “ap”
    *
    *   Input: [“hawaii”, “happy”]
    *   Output: 2 // “ha”
    *
    *   Input: [“dog”, “dogs”, “doge”]
    *   Output: 3 // “dog”
    *
*/
/*
풀이

이 문제는 가장 긴 공통된 접두사가 첫단어라고 가정하고 각 문자마다 모든 단어에 비교합니다.
비교하는 방식은 단어의 같은 위치에 문자가 있는지 확인합니다.
만약 문자가 다르거나, 문자가 없으면 현재의 문자 위치까지만 공통된 접두사 입니다.

int longestPrefixLength(String[] arr)
{
    if (arr.length == 0)
    {
        return 0;
    }
    String max_prefix = arr[0];
    for (int i = 0; i < max_prefix.length(); i++)
    {
        char c = max_prefix.charAt(i);
        for (int j = 1; j < arr.length; j++)
        {
            if (i == arr[j].length() || arr[j].charAt(i) != c)
            {
                return i;
            }
        }
    }
    return max_prefix.length();
}

시간 복잡도: O(n) // n은 모든 단어들의 문자 개수의 합.
공간 복잡도: O(1)
*/
