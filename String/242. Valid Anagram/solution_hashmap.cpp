class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;
        for(auto c : s){
            hash[c]++;
        }
        for(auto c : t){
            hash[c]--;
        }
        for(const auto &c : hash){
            if(c.second != 0){
                return false;
            }
        }
        return true;
    }
};