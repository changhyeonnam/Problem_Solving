class Solution(object):
    def longestPalindrome(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        def update_dict(dt,val):
            if str(val) not in dt:
                dt[str(val)]=1
            else:
                dt[str(val)]+=1
        word_dt = {}
        for word in words:
            update_dict(word_dt,word)
        prefix = ""
        suffix = ""
        palindrome = ""
        for word in words:
            word = str(word)
            if word_dt[word]==0:
                continue
            reverse_word = word[::-1]
            if word == reverse_word:
                if word_dt[word]>=2:
                    prefix+=word
                    suffix=word+suffix
                    word_dt[word]-=2
                else:
                    word_dt[word]-=1
                    palindrome+=word
            elif reverse_word in word_dt:
                if word_dt[reverse_word]==0:
                    continue
                word_dt[word]-=1
                word_dt[reverse_word]-=1
                prefix=prefix+word
                suffix=reverse_word+suffix
        answer = prefix + palindrome[:2] + suffix
        return len(answer)