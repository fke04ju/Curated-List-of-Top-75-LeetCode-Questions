# 242. Valid Anagram

><https://leetcode.com/problems/valid-anagram/>

## Description
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
## Examples
Example 1:  

Input: s = "anagram", t = "nagaram"  

Output: true  

Example 2:  

Input: s = "rat", t = "car"  

Output: false  

 
## My idea (hash map)
Use hash map to store S's letter frequency, then minus with T's letter frequency, if all letter frequencies are zero ( it means S and T have same letter frequency ), S and T are anagram.