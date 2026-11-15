class Solution {
public:
const int MOD=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
    int even=1,odd=0;
        int sum=0;
        long long ans=0;
        for(int x:arr){
            sum=(sum+x)%2;
            if(sum==1){
                ans=(ans+even)%MOD;
                odd++;
            }else{
                ans=(ans+odd)%MOD;
                even++;
            }
        }
        return ans;
    }    
    
};