class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector <int> ans;
        
        for(int i=0;i<nums.size();i++){
            int leftsum=0, rightsum=0;
            for(int j=0;j<i;j++)
                leftsum+=nums[j];
            for(int j=i+1;j<nums.size();j++)
                rightsum+=nums[j];
            ans.push_back(abs(leftsum - rightsum));
        }
        return ans;
    }
};