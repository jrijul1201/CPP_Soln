class Solution {
public:
    bool isMatch(string s, string p) {
        int l1 = s.length();
        int l2 = 0;
        for(int i=0;i<p.length();i++){
            if(p[i]!='*'){
                l2++;
            }
        }
        vector<vector<bool>> dp(l2+1 , vector<bool> (l1+1));
        int pos = 1;
        int pos1=1;
        int l = p.length();
        while(pos<l){
            if(p[pos]=='*'){
                dp[pos1][0] = true;
                pos+=2;
                pos1++;
            }
            else{
                break;
            }
        }
        dp[0][0] = true;
        pos = 0;
        for(int i=1;i<=l2;i++){
            bool indi = false;
            if((pos+1)<l){
                if(p[pos+1]=='*'){
                    indi = true;
                }
            }
            for(int j = 1;j<=l1;j++){
                if(indi){
                    if(p[pos]==s[j-1] || p[pos]=='.'){
                        dp[i][j] = dp[i-1][j-1] ? dp[i-1][j-1] : dp[i][j-1];
                        dp[i][j] = dp[i-1][j] ? dp[i-1][j] : dp[i][j];
                    }
                    else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
                else{
                    if(p[pos]==s[j-1] || p[pos]=='.'){
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
            }
            if(indi){
                pos+=2;
            }
            else{
                pos+=1;
            }
        }
        return dp[l2][l1];
   }
};
