class Solution {
public:
    bool checkprime(int i){
        if(i<=1)return false;
        if(i<=3)return true;

        if(i%2==0||i%3==0)return false;

        for(int p=5;p*p<=i;p+=6){
            if(i%p==0||i%(p+2)==0)return false;
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>ans;
        int sum=0;
            for(int i=2;i<=n && sum<=s;i++){
                bool check=checkprime(i);
                if(check){
                    sum=sum+i;
                    if(sum<=s)ans.push_back(i);
                }
            }
        return ans;
    }
};