# https://leetcode.com/problems/two-sum/
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        c1, c2 = 0, 0

        for i in nums:
            for l in nums:
                if(nums[c1] + nums[c2] == target and c1 != c2):
                    return [c1, c2]
                c2 += 1
            c2 = 0
            c1 += 1
