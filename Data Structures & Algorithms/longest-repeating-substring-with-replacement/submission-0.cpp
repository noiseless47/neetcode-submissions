class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, n=s.size(), maxf=0, ans=0;
        vector<int> freq(26,0);
        for(r=0; r<n; r++){
            freq[s[r]-'A']++;
            maxf=max(maxf, freq[s[r]-'A']);
            while((r-l+1)-maxf>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};