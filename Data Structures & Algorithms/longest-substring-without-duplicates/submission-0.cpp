class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> x(256,-1);
        int n = s.size(), l=0, r=0, maxlen=0;
        while(r<n)
        {
            if(x[s[r]] != -1)
            {
                if(x[s[r]] >= l)
                    l = x[s[r]] + 1;
            }
            int temp = r-l+1;
            maxlen=max(temp,maxlen);
            x[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};