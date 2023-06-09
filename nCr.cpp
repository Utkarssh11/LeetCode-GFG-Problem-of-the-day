GFG
nCr

class Solution{
public:
    int nCr(int n, int r){
        int mod = 1e9+7;
        //base case
        if(r>n)return 0;
        if(r==n) return 1;

        vector<vector<int>> dp(r+1,vector<int>(n+1,0));

        for(int i=0;i<=r;i++){
            for(int j=0;j<=n;j++){

                if(i==j||i==0||j==0)
                    dp[i][j]=1;


                else{
                    dp[i][j] = (dp[i-1][j-1]+dp[i][j-1])%mod;
                }
            }
        }
        return dp[r][n];
    }
};
