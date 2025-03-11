class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(numbers)
        result = []
        l = 0
        r = n-1 
        while(l<r):
            if numbers[l]+numbers[r]==target:
                result.append(l+1)
                result.append(r+1)
                return result
            elif numbers[l]+numbers[r]>target:
                r -= 1
            else:
                l += 1