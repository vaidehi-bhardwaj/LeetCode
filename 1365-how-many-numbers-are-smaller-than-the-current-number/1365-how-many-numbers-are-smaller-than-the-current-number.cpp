class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> sol;
        for(int i=0; i<nums.size(); i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if((j!=i)&&(nums[j]<nums[i]))
                    c++;
               
            }
            sol.push_back(c);
        }
        return sol;
    }
};