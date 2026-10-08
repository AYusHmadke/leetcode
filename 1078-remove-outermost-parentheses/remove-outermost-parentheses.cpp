class Solution {
public:
    // string removeOuterParentheses(string s) {
    //     int n=s.size();
    //     stack<char>st;
    //     st.push('*');
    //     for(auto ch:s){
    //         if()
    //     }
        
    // }

    string removeOuterParentheses(string s) {
        int n=s.size();
        int bal=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                bal++;
                if(bal!=1)ans+="(";
            }else{
                bal--;
                if(bal!=0)ans+=")";
            }
        }
        return ans;
    }








};