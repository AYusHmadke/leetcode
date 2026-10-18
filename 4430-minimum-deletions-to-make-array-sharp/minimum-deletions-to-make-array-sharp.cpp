class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int dup=0;
         int prev=0;
        for(auto x:nums){
           if(prev==x)dup++;
           prev=x;
        }
        return dup;
    }
};