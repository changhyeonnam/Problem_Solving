class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        num1,num2 = (num1,num2) if num1>num2 else (num2,num1)
        base = int(num1)
        answer = 0
        for idx in range(1,len(num2)+1):
            digit = int(num2[len(num2)-idx])
            if digit == 0:
                base = int(str(base)+"0")
            else:
                answer += base * digit
                if idx == len(num2):
                    continue
                base = int(str(base)+"0")
        answer = str(answer)
        return answer
