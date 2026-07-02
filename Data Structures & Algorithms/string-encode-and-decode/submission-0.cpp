class Solution {
public:

    string encode(vector<string>& strs) {
        string s, temp;
        int l;
        for(string i:strs){
            l=i.length();
            temp=to_string(l)+'#'+i;
            s.append(temp);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i=0;
        string len;
        string word;
        while(i<s.length()){
            len="";
            while(s[i]!='#'){
                len+=s[i];
                i++;
            }
            int l=stoi(len);
            i++;
            word=s.substr(i,l);
            strs.push_back(word);
            i+=l;
        }
        return strs;
    }
};
