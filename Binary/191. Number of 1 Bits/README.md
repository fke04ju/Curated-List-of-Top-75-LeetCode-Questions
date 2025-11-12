# 191. Number of 1 Bits
><https://leetcode.com/problems/number-of-1-bits/>

## Description
Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

## Examples
Example 1:  

Input: n = 11 

Output: 3  

Explanation:  

The input binary string 1011 has a total of three set bits.  

Example 2:  

Input: n = 128  

Output: 1  

Explanation:  

The input binary string 10000000 has a total of one set bit.  

## My idea

Consider the rightmost bit, then move right with bit operation.