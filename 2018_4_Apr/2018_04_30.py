
# 링크드 리스트(linked list)의 머리 노드(head node)와 정수 N이 주어지면,
# 끝에서 N번째 노드(node)를 제거하고 머리 노드(head node)를 리턴하시오.
# 단, 리스트를 한번만 돌면서 풀어야합니다. N은 리스트 길이보다 크지 않습니다.
#
# 예제)
# Input: 1->2->3->4->5, N=2
# Output: 1->2->3->5
#
# Input: 1->2->3, N=3
# Output: 2->3
#
# Input: 1, N=1
# Output: null

'''
풀이

이 문제는 두개의 포인터를 쓰면 쉽게 풀립니다. 첫번째 포인터를 먼저 N만큼 보냅니다.
그리고 첫번째 포인터와 두번째 포인터를 동시에 하나씩 움직입니다.
첫번째 포인터의 다음 노드가 null의 값을 가지게 되면, 두번째 포인터의 다음 노드는 끝에서 N번째 노드가 됩니다.
그 노드를 제거 한뒤 머리 노드를 리턴하면 됩니다.

중요한 엣지 케이스는, 첫번째 노드를 N번째 옮긴 후 노드의 값이 null이라면
끝에서 N번째 노드는 첫번째 노드임으로 헤드를 업데이트 한후 리턴해줍니다.

Node solution(Node head, int n)
{
    if (head == null)
    {
        return null;
    }
    Node first = head;
    Node second = head;
    for (int i = 0; i < n; i++)
    {
        first = first.next;
    }
    if (first == null)
    {
        head = head.next;
        return head;
    }
    while (first.next != null)
    {
        first = first.next;
        second = second.next;
    }
    second.next = second.next.next;
    return head;
}

시간 복잡도: O(n)
공간 복잡도: O(1)
'''
