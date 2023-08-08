class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
        int n = nums.size()/2;
        
        unordered_map<int, int> temp;
        for(int num : nums)
            temp[num]++;
        
        for(int i=0; i<nums.size(); i++){
            if(temp[nums[i]] > n)
                return nums[i];
        }
        return -1;
    }
};