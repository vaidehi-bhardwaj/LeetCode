class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>characterCount;
        for(char c : s)
            characterCount[c]++;
        for(int i=0; i < s.length();i++){
            if(characterCount[s[i]]==1)
                return i;
        }
  
    return -1;
    }
};