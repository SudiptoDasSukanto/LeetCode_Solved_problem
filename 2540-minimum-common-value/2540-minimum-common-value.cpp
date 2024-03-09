class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> mp ;
        for(int i=0 ; i<nums1.size() ; i++){
            mp[nums1[i]] = true ;
        }
        
        for(int i=0 ; i<nums2.size() ; i++){
            if(mp[nums2[i]]){
                return nums2[i];
            }
        }
        return -1 ;
    }
};