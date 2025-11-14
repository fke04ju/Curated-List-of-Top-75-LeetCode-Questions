# 322. Coin Change

><https://leetcode.com/problems/coin-change/>

## Description

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.  

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.  

You may assume that you have an infinite number of each kind of coin.  

## Examples
Example 1:  

Input: coins = [1,2,5], amount = 11  
Output: 3  
Explanation: 11 = 5 + 5 + 1  
Example 2:  

Input: coins = [2], amount = 3  
Output: -1  
Example 3:  

Input: coins = [1], amount = 0  
Output: 0  

## My idea (Top-down DP with memoization)

Base case :  
* If amount is 0, it needs 0 coins, return 0
* If amount < 0, return -1
* If dp[amount] already has an answer, return it

Recursive step :  
* Initialize min_coin
* For each coin, we recurively call solve(amount - coin), if the result of this call is not failure, it is a valid combination, total coins for this path will be result+1
* Update min_coin
* Check min_coin, if min_coin = -inf, means no solution found, otherwise, it's the answer
* Store the result into dp[amount] so we don't need to calculate again
