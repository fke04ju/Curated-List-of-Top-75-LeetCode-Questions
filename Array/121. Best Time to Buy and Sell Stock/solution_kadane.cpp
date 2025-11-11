class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> prefix(prices.size()-1, 0);
        for(int i = 0;i<prices.size()-1;i++){
            prefix[i] = prices[i+1] - prices[i];
        }
        int maxi = 0;
        int current_sum = 0;
        for(int i = 0;i<prefix.size();i++){
            if(current_sum + prefix[i] > prefix[i]){
                current_sum += prefix[i];
            }else{
                current_sum = prefix[i];
            }
            if(current_sum > maxi){
                maxi = current_sum;
            }
        }
        return maxi;
    }
};