#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sorted;
        for(int i:nums){
            if(sorted.count(i))
                return true;
            sorted.insert(i);
        }
        return false;
    }
};