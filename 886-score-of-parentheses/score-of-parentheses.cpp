class Solution {
public:
    int scoreOfParentheses(string s) {
        int bal=0;
        int score=0;
        char prev='(';
        for(auto ch:s){
            if(ch=='('){
                bal++;
            }else{
                bal--;
                if(prev=='(')
                score+=1<<bal;
            }
            prev=ch;
        }
        return score;
    }
};