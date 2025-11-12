class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> stack;
        stack.push_back(0);
        if(n == 0){
            return stack;
        }
        stack.push_back(1);
        int ptr_cpy = 2;
        int seq = n/2;
        while(seq--){
            for(int i = 0;i<ptr_cpy;i++){
                stack.push_back(stack[i]+1);
                if(stack.size() == n+1){
                    return stack;
                }
            }
            ptr_cpy = stack.size();
        }
        return stack;
    }
};