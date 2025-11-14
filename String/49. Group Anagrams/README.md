# 49. Group Anagrams

><https://leetcode.com/problems/group-anagrams/>

## Description
Given an array of strings strs, group the anagrams together. You can return the answer in any order.  

## Examples
Example 1:  

Input: strs = ["eat","tea","tan","ate","nat","bat"]  

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]  

Explanation:  

There is no string in strs that can be rearranged to form "bat".  
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.  
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.  

## My idea (hash map)

Since anagrams has same character frequency, we can use hash map to group the anagrams by their sorted type.  
For example, 'ate' 'eat' 'tea' has same sorted type 'aet'.  