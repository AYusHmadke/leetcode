class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,mcnt=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
                mcnt=max(cnt,mcnt);
            }else if(s[i]==')'){
                cnt--;
            }
            
        }
        return mcnt;
    }
};