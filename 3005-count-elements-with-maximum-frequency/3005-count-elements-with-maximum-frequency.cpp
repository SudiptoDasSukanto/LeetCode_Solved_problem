class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int len = nums.size();
        for(int i=0 ; i<len ; i++){
            mp[nums[i]]++;
        }
        int ans ;
        int high = INT_MIN ;
        for(auto p : mp){
            if(p.second>high){
                ans = 0 ;
                ans += p.second;
                high = p.second ;
            }else if(high==p.second){
                ans += p.second;
            }
        }
        return ans;
    }
};