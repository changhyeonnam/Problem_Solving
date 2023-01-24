class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        m,n = len(matrix), len(matrix[0])
        check=[]
        answer = []
        # 0 = right, 1 = down, 2 = left, 3 = up
        flag = 0
        cy,cx = 0,0
        check.append((cy,cx))
        answer.append(matrix[cy][cx])

        while(1):
            if flag is 0:
                if cx+1 >=n or (cy,cx+1) in check:
                    flag+=1
                else:
                    cx+=1
                    check.append((cy,cx))
                    answer.append(matrix[cy][cx])
            elif flag is 1:
                if cy+1 >=m or (cy+1,cx) in check:
                    flag+=1
                else:
                    cy+=1
                    check.append((cy,cx))
                    answer.append(matrix[cy][cx])

            elif flag is 2:
                if cx-1 <0 or (cy,cx-1) in check:
                    flag+=1
                else:
                    flag2=True
                    cx-=1
                    check.append((cy,cx))
                    answer.append(matrix[cy][cx])
            elif flag is 3:
                if cy-1>=m or (cy-1,cx) in check:
                    flag+=1
                else:
                    cy-=1
                    check.append((cy,cx))
                    answer.append(matrix[cy][cx])
            flag%=4
            if(len(answer)==m*n):
                break

        return answer







