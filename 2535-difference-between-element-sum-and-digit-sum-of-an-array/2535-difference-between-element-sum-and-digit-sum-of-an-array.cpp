class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum=0,digiSum=0;
        for(int i=0;i<nums.size();i++){
            eleSum+=nums[i];
            int n = nums[i];
            while(n!=0){
                digiSum += n%10;
                n=n/10;
            }
        }
        return abs(eleSum - digiSum);
    }
};