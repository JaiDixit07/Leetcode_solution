class Solution {
public:
    // int countpaths(int i,int j,int m,int n,vector<vector<int>> &dp){
    //     // Base cases
    //     if((i==m-1) || (j==n-1)) return 1;
    //     if(i>=m || j>= n) return 0;

    //     if(dp[i][j]!=-1) return dp[i][j];
    //     dp[i][j]= countpaths(i+1,j,m,n,dp)+ countpaths(i,j+1,m,n,dp);
    //     return dp[i][j];
    // }
    int uniquePaths(int m, int n) {
        // 2 Approach -> dp and combination 
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return countpaths(0,0,m,n,dp);

        // 2nd approach -> combination
        int N = m+n-2;
        int R= min(m-1,n-1);
        long long ans=1;
        for(int i=1;i<=R;i++){
            ans = ans* (N-R+i);
            ans= ans/i;
        }
        return (int)ans;
    }
};