class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int>m;

        for(char c:s) m[c]++;
        for(char c:t) m[c]--;

        for(auto x:m){
            if(x.second!=0)
            return false;
        }
        return true;
    }
};
