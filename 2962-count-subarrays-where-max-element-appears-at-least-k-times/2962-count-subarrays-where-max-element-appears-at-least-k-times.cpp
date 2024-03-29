class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxEle = *max_element(nums.begin(),nums.end());
        long long start = 0 , ans = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==maxEle){
                k--;
            }
            while(k==0){
                if(nums[start]==maxEle){
                    k++ ;
                }
                start++;
            }
            ans += start;
        }
        return ans;
    }
};