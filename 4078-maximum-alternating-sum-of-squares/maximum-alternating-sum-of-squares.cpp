class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            ans+=(1LL*nums[i]*nums[i]);
        }
        vector<int> cp(n);
        for(int i =0;i<n;i++){
            cp[i]=abs(nums[i]);
        }
        long long ans2=0;
        sort(cp.begin(),cp.end());
        for(int j=0;j<n/2;j++){
            ans2+=(1LL*cp[j]*cp[j]);
        }
        return ans-(2*ans2); 
    }
};