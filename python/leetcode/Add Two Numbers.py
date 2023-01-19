# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry = 0
        prehead = ListNode(0)
        p = prehead
        while l1 or l2 or carry:
            val_sum = (l1.val if l1 else 0) + (l2.val if l2 else 0) + carry
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
            carry = val_sum/10
            new_val = val_sum%10
            new_Node = ListNode(val=new_val)
            p.next = new_Node
            p = new_Node
        return prehead.next
