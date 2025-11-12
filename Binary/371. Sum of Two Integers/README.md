# 371. Sum of Two Integers
><https://leetcode.com/problems/sum-of-two-integers/>

## Description

Given two integers a and b, return the sum of the two integers without using the operators + and -.

## Examples
Example 1:  

Input: a = 1, b = 2  
Output: 3  
Example 2:  

Input: a = 2, b = 3  
Output: 5  

## My idea
xor = a ^ b  
carry = ( a & b ) << 1  
a + b = xor + carry  
Notice that if carry != 0 means it still needs to add carry into xor.  