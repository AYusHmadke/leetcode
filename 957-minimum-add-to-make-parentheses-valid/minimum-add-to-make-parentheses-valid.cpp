class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans=0;
        for(auto ch:s){
            if(ch=='('){
                st.push('(');
            }else{
                if(!st.empty() && st.top()=='(')st.pop();
                else st.push(')');
            }
        }
        ans=st.size();
        return ans;
        // while(!st.empty()){
        //     ans+=1;
        //     st.pop();
        // }
    }
};
//(((()    (())))() )(
//11112    11222234
/*
int bal=0;
        char prev='(';
        int ans=0;
        for(auto ch:s){
            if(ch=='('&&prev==')'){
                ans+=abs(bal);
                bal=1;
            }else if(ch=='(')bal++;
            else bal--;
            prev=ch;
        }
        ans+=abs(bal);
        return ans;
*/