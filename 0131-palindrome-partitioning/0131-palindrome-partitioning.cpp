class Solution {
public:
    void helper(int idx, vector<string>& ans, vector<vector<string>>& result, string s){
        if(idx == s.size()){
            result.push_back(ans);
            return;
        }
        
        for(int i=idx; i<s.size(); i++){
            if(palindrome(idx,i, s)){
                ans.push_back(s.substr(idx, i-idx+1));
                helper(i+1, ans, result, s);
                ans.pop_back();
            }
        }
    }
    
    bool palindrome(int start, int end, string s){
       while(start<=end){
           if(s[start]!=s[end])
               return false;
           start++;
           end--;
       }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>> result;
        
        helper(0,ans,result,s);
        return result;
                
        
    }
};