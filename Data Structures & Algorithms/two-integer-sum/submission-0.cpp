class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        int diff=0;
        for(int i=0; i<nums.size(); i++)
            sums[nums[i]]=i;
        for(int i=0; i<nums.size(); i++){
            diff=target-nums[i];
            if(sums.count(diff) && sums[diff] != i)
                return {i,sums[diff]};
        }
        return {};
    }
};
