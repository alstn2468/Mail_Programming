
# String이 주어지면, 중복된 char가 없는 가장 긴 서브스트링 (substring)의 길이를 찾으시오.
#
# 예제)
#
# Input: “aabcbcbc”
# Output: 3 // “abc”
#
# Input: “aaaaaaaa”
# Output: 1 // “a”
#
# Input: “abbbcedd”
# Output: 4 // “bced”

'''
풀이

이 문제는 해쉬맵을 사용하여 char와 char의 인덱스를 저장하여 풀면 됩니다.
string의 각 char를 보면서 해쉬맵에 있다면 substring 시작점을 char의 인덱스+1 로 두면 됩니다.
그리고 현재 char의 인덱스와 시작점의 거리를 계속 계산하여 가장 큰 값을 리턴하면 됩니다.

int longestSubstringLength(String s)
{
	int ret = 0;
	int start = 0;
	Map<char, int> map = new HashMap<>();
	for (int j = 0; j < s.length(); j++)
    {
		if (map.containsKey(s[j]))
        {
			start = Math.max(map.get(s[j]), start);
		}
		ret = Math.max(ret, j - start + 1);
		map.put(s[j], j + 1); // 캐릭터 인덱스 저장
	}
	return ret;
}

시간 복잡도: O(n) // n 은 input string 의 길이.
공간 복잡도: O(n)
'''
