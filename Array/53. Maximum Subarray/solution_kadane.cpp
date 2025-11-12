class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_seg = 0;
        int maxi_seg = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i] + current_seg > nums[i]){
                current_seg += nums[i];
            }else{
                current_seg = nums[i];
            }
            maxi_seg = max(maxi_seg, current_seg);
        }
        return maxi_seg;
    }
};