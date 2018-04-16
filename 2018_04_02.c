/*
    *
    *   길이가 같은 두 문자열(string) A 와 B가 주어지면, A 가 B 로 1:1 암호화 가능한지 찾으시오.
    *
    *   예제)
    *   Input: “EGG”, “FOO”
    *   Output: True // E->F, G->O
    *
    *   Input: “ABBCD”, “APPLE”
    *   Output: True // A->A, B->P, C->L, D->E
    *
    *   Input: “AAB”, “FOO”
    *   Output: False
    *
*/
/*
풀이

이 문제는 해쉬맵(hashmap)을 써서 A의 문자를 B의 문자 매칭을 저장하면 됩니다. A의 문자가 해쉬맵의 키로 있다면,
B의 문자와 해쉬맵의 있는 값과 비교합니다. A의 문자가 해쉬맵의 키로 없다면 B의 문자가 해쉬맵의 값으로 있는지 확인하고,
없으면 해쉬맵에 더해줍니다.

bool solve(String a, String b)
{
    HashMap<char, char> map = new HashMap<>();
    for (int i = 0; i < a.length(); i++)
    {
        char c1 = a.charAt(i);
        char c2 = b.charAt(i);
        if (map.containsKey(c1))
        {
            if (map.get(c1) != c2)
            {
                return false;
            }
        }
        else
        {
            if (map.containsValue(c2))
            {
                return false;
            }
            map.put(c1, c2);
        }
    }
    return true;
}

시간 복잡도: O(n) // n은 문자 A의 길이
공간 복잡도: O(n)
*/
