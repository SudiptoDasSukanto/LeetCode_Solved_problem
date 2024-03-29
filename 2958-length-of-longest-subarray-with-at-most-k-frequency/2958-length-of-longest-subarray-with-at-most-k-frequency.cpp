class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0 ;
        int sIdx = -1 ;
        map<int,int> mp;
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
               
                while(mp[nums[i]]>k){
                     sIdx++;
                    mp[nums[sIdx]]--;
                }
            }
            ans = max(ans , i-sIdx);
        }
        return ans ;
    }
};