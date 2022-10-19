'''
Delete the middle node of linked list (2095)
'''

class Solution:
  def deleteMiddle( self, head : Optional[ListNode]):
    if head == None or head.next == None:
      return None
    
    slow = head
    fast = head.next.next
    
    while fast and fast.next != None:
      slow = slow.next
      fast = fast.next.next
  
    slow.next = slow.next.next
    return head
