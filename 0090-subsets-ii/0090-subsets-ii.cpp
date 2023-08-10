class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& result, vector<int> ans, int idx, int n){
        sort(ans.begin(), ans.end());
       if( find(result.begin(), result.end(), ans) == result.end())
            result.push_back(ans);
        
        for(int i=idx; i<n; i++){
            ans.push_back(nums[i]);
            solve(nums, result, ans, i+1, n);
            ans.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int> ans;
        
        int n= nums.size();
        
        solve(nums, result, ans, 0, n);
        
        return result;
    }
};