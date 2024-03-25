class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1,0);
        int total = 0;
        for(int i=0 ; i<n ; i++){
            count[nums[i]]++;
            if(count[nums[i]]==2){
                total++;
            }
        }
        vector<int>ans(total);
        int j=0 ;
        for(int i=0 ; i<n+1 ;i++){
            //cout << count[i] << " ";
            if(count[i]==2){
                ans[j] = i;
                j++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};