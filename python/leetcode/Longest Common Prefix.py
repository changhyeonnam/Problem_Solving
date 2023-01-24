class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        base_str = strs[0]
        for i in range(1,len(strs)):
            len_small = len(base_str) if len(base_str)<=len(strs[i]) else len(strs[i])
            new_str = ""
            for j in range(len_small):
                if base_str[j] == strs[i][j]:
                    new_str+=base_str[j]
                else:
                    break
            base_str = new_str

        return base_str