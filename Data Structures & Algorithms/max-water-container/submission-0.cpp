class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=0;
        int amount=0;
        while(left<right){
            area=(right-left)*min(heights[left], heights[right]);
            amount=max(area,amount);
            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }
        return amount;
    }
};
