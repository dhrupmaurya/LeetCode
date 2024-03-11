class Solution {
public:
    long long dfs(vector<int>& r,vector<vector<int>>& f,vector<vector<long long>>& dp,int in,int j){
        if(in>=r.size()) return 0;
        if(j>=f.size() && in<r.size()) return LLONG_MAX;
        if(dp[in][j]!=-1) return dp[in][j];
        long long re = dfs(r,f,dp,in,j+1), sum = 0;
        for(int i = in; i<r.size() && i-in+1<=f[j][1];++i){
            sum+= abs(r[i]-f[j][0]);
            long long k = dfs(r,f,dp,i+1,j+1);
            if(k!=LLONG_MAX) re = min(re,sum+k);
        }
        return dp[in][j] = re;
    }
    long long minimumTotalDistance(vector<int>& r, vector<vector<int>>& f) {
        sort(f.begin(),f.end());
        sort(r.begin(),r.end());
        vector<vector<long long>> dp(r.size()+1,vector<long long>(f.size()+1,-1));
        return dfs(r,f,dp,0,0);
    }
};