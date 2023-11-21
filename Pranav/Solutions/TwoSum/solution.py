#This is the solution for the problem in LeetCode.

class Solution(object):
    def twoSum(self, nums, target):
        dic = {}
        for index,ele in enumerate(nums):
            
            if target - ele in dic:
                return dic[target-ele], index
            dic[ele] = index   