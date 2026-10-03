class Solution {
public:
    void validPar(vector<string>&ans,string s,int k,int &n,int end){
        if(k==n && end==n){
            ans.push_back(s);
            return;
        }
        if(k<n)validPar(ans,s+"(",k+1,n,end);
        if(end<k)validPar(ans,s+")",k,n,end+1);
    }


    vector<string> generateParenthesis(int n) {
        //this is backtracking problem so lets visit sum bt problems 
        //how to implement it 
        string s ="";
        vector<string> ans;
        validPar(ans,s,0,n,0);
        return ans;
    }
    
};