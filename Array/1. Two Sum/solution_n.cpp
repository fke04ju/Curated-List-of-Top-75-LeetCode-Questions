class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0;i<nums.size();i++){
            int y = target - nums[i];
            if(hash.find(y) != hash.end()){ // found target
                return {hash[y], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};