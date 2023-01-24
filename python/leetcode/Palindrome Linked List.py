# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        def solve(head):
            if head == None:
                return True
            val = solve(head.next) and (head.val == self.temp.val)
            self.temp = self.temp.next
            return val
        self.temp = head
        return solve(head)
