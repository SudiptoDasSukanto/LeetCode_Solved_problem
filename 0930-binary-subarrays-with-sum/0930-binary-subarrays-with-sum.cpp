class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int len = nums.size();
        int ans = 0 ;
        int j= 0 ;
        for(int i=0 ; i<len ; i++){
            if (i>0) nums[i]+=nums[i-1];
            j=0;
            if(nums[i]==goal){
                ans++;
                while(nums[i]-nums[j]==goal && j+1<=i){
                    ans++;
                    j++ ;
                }
            }
            else if(nums[i]>goal){
                while(nums[i]-nums[j]>=goal  && j+1<=i){
                    if(nums[i]-nums[j]==goal)ans++;
                    j++;
                }
            }
        }   
        return ans ;
    }
};