class Solution {
public:
    int getSum(int a, int b) {
        int xor_ab = a ^ b;
        int carry = a & b;
        carry <<= 1;
        while(carry != 0){
            int tmp = xor_ab ^ carry;
            carry = xor_ab & carry;
            xor_ab = tmp;
            carry <<= 1;
        }
        return xor_ab;
    }
};