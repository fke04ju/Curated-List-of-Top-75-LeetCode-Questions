# 53. Maximum Subarray

><https://leetcode.com/problems/maximum-subarray/>

## Description

Given an integer array nums, find the subarray with the largest sum, and return its sum.

## Examples
Example 1:  

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]  
Output: 6  
Explanation: The subarray [4,-1,2,1] has the largest sum 6.  
Example 2:  

Input: nums = [1]  
Output: 1  
Explanation: The subarray [1] has the largest sum 1.  
Example 3:  

Input: nums = [5,4,-1,7,8]  
Output: 23  
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.  

## My idea (Kadane's algorithm)
Kadane's Algorithm :

* step 1 : If current element array sum + new element > new element, put the new element into current array. Otherwise, let the new element as a new array.
* step 2 : Record current maximum sum