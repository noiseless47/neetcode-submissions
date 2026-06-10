class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> x;
        for(string s:strs){
            string key=s;
            std::sort(key.begin(), key.end());
            x[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &i:x){
            ans.push_back(i.second);
        }
        return ans;
    }
};