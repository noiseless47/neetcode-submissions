class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        vector<int> temp1(l), temp2(l), res(l);
        int prod1 = 1, prod2 = 1;
        for(int i=0;i<l;i++){
            temp1[i] = prod1;
            prod1*=nums[i];
        }
        for(int i=l-1;i>=0;i--){
            temp2[i] = prod2;
            prod2*=nums[i];
        }
        for(int i=0;i<l;i++){
            res[i] = (temp1[i]*temp2[i]);
        }
        return res;
    }
};