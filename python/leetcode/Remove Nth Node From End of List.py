# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        tail = None
        pointer = head
        count = 0
        if pointer.next == None:
            return None
        while(pointer.next!=None):
            count += 1
            pointer = pointer.next
        count -=(n-1)
        count_tmp = 0
        pointer = head
        prev_pointer = head
        while(count_tmp<count):
            prev_pointer = pointer
            pointer = pointer.next
            count_tmp+=1
        if pointer == prev_pointer:
            return pointer.next
        next_pointer = pointer.next
        prev_pointer.next = next_pointer
        return head
