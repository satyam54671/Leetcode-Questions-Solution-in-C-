class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split()
        reversed_word = words[::-1]
        reversed_string = ' '.join(reversed_word)
        return reversed_string
        