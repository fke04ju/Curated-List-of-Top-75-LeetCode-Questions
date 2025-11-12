class Solution {
public:
    int hammingWeight(int n) {
        int ret = 0;
        while(n != 0){
            ret += n%2;
            n = n >> 1;
        }
        return ret;
    }
};