class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        check = []
        number = n
        while(1):
            val_sum = 0
            tmp = number
            flag = False
            while(tmp):
                val_sum += (tmp%10)**2
                tmp/=10

            number = val_sum
            if number == 1:
                return True
            if number not in check:
                check.append(number)
            else:
                return False