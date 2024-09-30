# https://leetcode.com/problems/palindrome-number/
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        elif(str(x) != str(x)[::-1]):
            return False
        else:
            return True
