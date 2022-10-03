

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next




def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
    dummy = ListNode(0, head)
    current = dummy
    second = head
    
    while n > 0 and second:
        second = second.next
        n-=1
    
    while second:
        second = second.next
        current = current.next
    current.next = current.next.next
    
    return dummy.next