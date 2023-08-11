class Solution {
public:
    bool isSubsequence(string s, string t) {
        /*
        //not all test cases were passed
        unordered_map<char,int> mp;
        
        for(int i=0; i<t.size(); i++)
            mp[t[i]]=i;
        
        int temp =-1;
        int count =0;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!= mp.end() && temp<mp[s[i]]){
                temp = mp[s[i]];
                count++;
            }
        }
        
        return count == s.size();
        */
        
        int sIdx = 0;
        int tIdx = 0;
        
        while(sIdx<s.size() && tIdx<t.size()){
            if(s[sIdx]==t[tIdx])
                sIdx++;
            tIdx++;
        }
        
        return sIdx == s.size();
    }
};