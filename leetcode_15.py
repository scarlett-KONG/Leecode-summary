class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()# how to do this? write down this later
        n = len(nums)
        triplets = list()
        #Loop for each character in the array
        for i in range(0, n):
            if i>0 and nums[i] == nums[i-1]:#this condition really confused me
                continue
            j = i+1
            k = n-1
            while j<k:
                if nums[i]+nums[j]+nums[k] == 0:
                    triplets.append([nums[i],nums[j],nums[k]])
                    j += 1
                    while j<k and nums[j] == nums[j-1]:
                        j += 1
                elif nums[i] + nums[j] +nums[k] <0:
                    j += 1
                else:
                    k -= 1
        return triplets