class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& result, vector<int>& ans, int idx, int n){
        result.push_back(ans);
        
        for(int i=idx; i<n; i++){
            ans.push_back(nums[i]);
            solve(nums, result, ans, i+1, n);
            ans.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        
        int n = nums.size();
        
        solve(nums, result, ans, 0, n);
        
        return result;
    }
};