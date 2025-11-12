# 338. Counting Bits

><https://leetcode.com/problems/counting-bits/>

## Description
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

## Examples
Example 1:  

Input: n = 2  
Output: [0,1,1]  
Explanation:  
0 --> 0  
1 --> 1  
2 --> 10  
Example 2:  

Input: n = 5  
Output: [0,1,1,2,1,2]  
Explanation:  
0 --> 0  
1 --> 1  
2 --> 10  
3 --> 11  
4 --> 100  
5 --> 101  

## My idea (Stack)
Partition the sequence to [0], [1], [2, 3], [4, 5, 6, 7], [8, 9, 10, 11, 12, 13, 14, 15] ..., we can find that the segments's length are 2's multiple.
We can also find that the segment [2, 3] is [0, 1]'s number + 1 and [4, 5, 6, 7] is [0, 1, 2, 3]'s number + 1, [8-15] is [0-7] + 1 ...
So, use stack to memoize the previous segment, and push the previous segment with number + 1 into the stack until it reaches target.