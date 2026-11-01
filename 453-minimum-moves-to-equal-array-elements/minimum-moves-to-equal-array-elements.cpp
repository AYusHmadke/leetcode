class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int mini=INT_MAX;
        for(auto &x:nums){
            sum+=x;
            mini=min(x,mini);
        }
        return sum-(mini*n);
    }
};