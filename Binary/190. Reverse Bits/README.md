# 190. Reverse Bits

><https://leetcode.com/problems/reverse-bits/>

## Description
Reverse bits of a given 32 bits signed integer.  

## Examples
Input: n = 43261596  

Output: 964176192  

Explanation:  

Integer	Binary  
43261596	00000010100101000001111010011100  
964176192	00111001011110000010100101000000  

## My idea
Use rightmost bit, add to answer and delete from n.