class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int n : nums){
            if(hash[n] >= 1){
                return true;
            }
            hash[n]++;
        }
        return false;
    }
};