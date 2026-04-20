class Solution {
public:
    bool isValid(string s) {
        stack<char> tung;
        unordered_map<char,char> maps={
            {')','('},
            {'}','{'},
            {']','['}
        };

        for(char c:s) {
            if(maps.count(c)){
                if(!tung.empty() && tung.top()==maps[c]){
                    tung.pop();
                }
                else return false;
            }
            else tung.push(c);
        }
        return tung.empty();
    }
};
