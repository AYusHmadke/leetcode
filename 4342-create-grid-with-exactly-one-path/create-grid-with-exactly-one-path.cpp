class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // string s="";
        // for(int i =0;i<n;i++)s+="#";
        // vector<string>st(s,m);
        vector<string> st(m, string(n, '#'));
        for(int i =0;i<m-1;i++){
            st[i][0]='.';
        }
        for(int i=0;i<n;i++)st[m-1][i]='.';
        
        return st;
    }
};