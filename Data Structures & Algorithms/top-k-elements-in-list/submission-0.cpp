class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<vector<int>> x;
        for(auto &n:freq){
            x.push_back({n.second, n.first});
        }
        sort(x.rbegin(),x.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(x[i][1]);
        }
        return ans;
    }
};
