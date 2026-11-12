class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int st =0,ed=0;
        int maxi=1;
        int prev=0;
        int cnt=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cnt++;
                maxi=max(cnt,maxi);
            }else{
                cnt=1;
            }
        }
        cnt=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                cnt++;
                maxi=max(cnt,maxi);
            }else{
                cnt=1;
            }
        }
        return maxi;
    }
};