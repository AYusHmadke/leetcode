class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int k=-1;
        int maxi=INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=i){
                k &=nums[i];
            if(k==0)return 0;
            }
            // maxi=max(k,maxi);
        }
        return max(k,0);
    }
};