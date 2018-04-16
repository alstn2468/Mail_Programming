/*
    *
    *   정수로된 배열이 주어지면, 각 원소가 자신을 뺀 나머지 원소들의 곱셈이 되게하라.
    *   단, 나누기 사용 금지, O(n) 시간복잡도
    *
    *   예제)
    *   input: [1, 2, 3, 4, 5]
    *   output: [120, 60, 40, 30, 24]
    *
*/
/*
풀이

여기서 중요한것은 나누기 사용이 안된다는것과 O(n) 시간 복잡도여야 한다는 겁니다.
여기 input 예제를 보면
Input a = [a[0], a[1], a[2], a[3], a[4]]

output =
[
a[1]*a[2]*a[3]*a[4],
a[0]*a[2]*a[3]*a[4],
a[0]*a[1]*a[3]*a[4],
a[0]*a[1]*a[2]*a[4],
a[0]*a[1]*a[2]*a[3]
]

그럼 여기서 두개의 배열을 만들어줍니다. O(n)*2 = O(n)

int one[N]; int product = 1;
for(int i = 0; i < N; i++)
{
    one[i] = product;
    product *= input[i];
}
int two[N]; int product = 1;
for(int i = N-1; i >= 0; i--)
{
    two[i] = product;
    product *= input[i];
}

int[] one = [
                1,
                a[0],
                a[0]*a[1],
                a[0]*a[1]*a[2],
                a[0]*a[1]*a[2]*a[3]
                ]
int[] two = [
                a[1]*a[2]*a[3]*a[4],
                a[2]*a[3]*a[4],
                a[3]*a[4],
                a[4],
                1
                ]
int[] output = [
                a[1]*a[2]*a[3]*a[4],
                a[0]*a[2]*a[3]*a[4],
                a[0]*a[1]*a[3]*a[4],
                a[0]*a[1]*a[2]*a[4],
                a[0]*a[1]*a[2]*a[3]
                ]

array one 과 array two 의 각 원소들을 서로 곱해주면 array output 이 나옵니다.

int output[N]
for(int i = 0; i < N; i++)
{
    output[i] = one[i]*two[i];
}

총 시간 복잡도 = O(n) + O(n) + O(n) = O(3n) = O(n)
*/
