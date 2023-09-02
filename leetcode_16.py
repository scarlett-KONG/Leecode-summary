from xmlrpc.client import MAXINT
from numpy import diff, sort
from pyparsing import nums

class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n, res, diff = len(nums), 0, sys.maxint #初始化
        sort(nums)
        for i in range(n-2):
            if i>0 and nums[i]==nums[i-1]:
                continue
            j, k= i+1, n-1
            while j<k:
                sum_ = nums[i] + nums[j] + nums[k]
                if int(abs(sum_ - target)) < diff:
                    res, diff = sum_, int(abs(sum_ - target))

                if sum_ == target:
                    return res 
                elif sum_>target:
                    k-=1
                else:
                    j+=1
        return res 
