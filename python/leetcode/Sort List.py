# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next:
            return head

        def getSize(head):
            cnt = 0
            while head:
                cnt+=1
                head = head.next
            return cnt

        def split(head, size):
            for i in range(size-1):
                if not head:
                    break
                head = head.next
            if not head:
                return None
            next_start, head.next = head.next, None #disconnect

            return next_start
        def merge(l1, l2, dummy_start):
            curr =dummy_start
            while l1 and l2:
                if l1.val <= l2.val:
                    curr.next, l1 = l1, l1.next
                else:
                    curr.next, l2 = l2, l2.next
                curr = curr.next
            curr.next = l1 if l1 else l2
            while curr.next: curr = curr.next
            return curr
        total_length = getSize(head)
        dummy = ListNode(0)
        dummy.next = head
        start, dummy_start, size = None, None, 1
        while size < total_length:
            dummy_start = dummy
            start = dummy.next
            while start:
                left = start
                right = split(left, size)
                start = split(right, size)
                dummy_start = merge(left, right, dummy_start)
            size *=2
        return dummy.next
