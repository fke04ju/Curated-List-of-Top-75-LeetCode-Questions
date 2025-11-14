class Solution {
public:
    int solve(vector<int>& coins, int remain, vector<int>& dp){
        if(remain < 0) return -1;
        if(remain == 0) return 0;
        if(dp[remain] != -2) return dp[remain];

        int mini = INT_MAX;
        for(int coin : coins){
            int res = solve(coins, remain - coin, dp);
            if(res >= 0 && res < mini){
                mini = res + 1;
            }
        }
        dp[remain] = (mini == INT_MAX) ? -1 : mini;
        return dp[remain];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -2);
        return solve(coins, amount, dp);
    }
};