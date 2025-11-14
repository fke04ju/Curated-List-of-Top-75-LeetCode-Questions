class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string, vector<int>> hash;
        for(int i = 0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            hash[s].push_back(i);
        }
        for(const auto & h : hash){
            vector<string> tmp;
            for(int i = 0;i<h.second.size();i++){
                tmp.push_back(strs[h.second[i]]);
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};