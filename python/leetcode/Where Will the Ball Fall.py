class Solution(object):
    def findBall(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        m,n = len(grid), len(grid[0])
        answer = []
        for j in range(n):
            cur = (0,j)
            flag = -2 # 1 = fall, -1 = stuck,
            while(1):
                if flag!=-2:
                    answer.append(flag)
                    break
                cy,cx = cur[0],cur[1]
                if cx == 0 and grid[cy][cx]== -1:
                    flag = -1
                    continue
                if cx == n-1 and grid[cy][cx]== 1:
                    flag = -1
                    continue
                if grid[cy][cx]==1:
                    if grid[cy][cx+1]==-1:
                        flag = -1
                        continue
                    else:
                        if cy+1 == m:
                            flag = cx+1
                            continue
                        else:
                            cur = (cy+1,cx+1)
                else:
                    if grid[cy][cx-1]==1:
                        flag = -1
                        continue
                    else:
                        if cy+1 == m:
                            flag = cx-1
                            continue
                        else:
                            cur = (cy+1, cx-1)
        return answer





