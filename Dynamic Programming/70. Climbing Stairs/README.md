# 70. Climbing Stairs
><https://leetcode.com/problems/climbing-stairs/>

## Description

You are climbing a staircase. It takes n steps to reach the top.  

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?  

## Examples
Example 1:  

Input: n = 2  
Output: 2  
Explanation: There are two ways to climb to the top.  
1. 1 step + 1 step  
2. 2 steps  
Example 2:  

Input: n = 3  
Output: 3  
Explanation: There are three ways to climb to the top.  
1. 1 step + 1 step + 1 step  
2. 1 step + 2 steps  
3. 2 steps + 1 step  

## My idea
Use dynamic programming, the ways to x stairs is the ways to x-1 stairs ( climb one step to x ) + the ways to x-2 stairs ( climb two steps to x ).