
 # 두개의 정렬된(sorted) 정수 링크드리스트(linked list)가 주어지면, 두 리스트를 합친 정렬된 링크드리스트를 만드시오.
 #
 # 예제)
 # Input: 1->2->3, 1->2->3
 # Output: 1->1->2->2->3->3
 #
 # Input: 1->3->5->6, 2->4
 # Output: 1->2->3->4->5->6

'''
풀이

이 문제는 각 리스트마다 포인터를 만들고, 매번 두 포인터중에 더 작은 값을 합친 리스트에 이어주면 됩니다.
두 포인터 중 하나가 리스트 끝(null)이 되면, 끝이 아닌 포인터를 합친 리스트 끝에 붙여주면 됩니다.
합친 리스트의 시작을 임의로 만들고, 두 포인터 중 하나가 null이 될때까지 while loop을 돌면서 합친 리스트에 하나씩 더하면 됩니다.
마지막에 임의로 만든 노드의 다음 값, 즉 합친 리스트의 머리 노드(head node)를 리턴해주면 됩니다.

Node solution(Node list1, Node list2)
{
    Node mergedListPreHead = new Node(0);
    Node mergedListCurrent = mergedListPreHead;
    while (list1 != null && list2 != null)
    {
        if (list1.val < list2.val)
        {
            mergedListCurrent.next = list1;
            list1 = list1.next;
        }
        else
        {
            mergedListCurrent.next = list2;
            list2 = list2.next;
        }
        mergedListCurrent = mergedListCurrent.next;
    }

    if (list1 == null)
    {
        mergedListCurrent.next = list2;
    }
    else
    {
        mergedListCurrent.next = list1;
    }
    return mergedListPreHead.next;
}

시간 복잡도: O(n) // n은 두 리스트의 원소의 개수.
공간 복잡도: O(1)
'''
