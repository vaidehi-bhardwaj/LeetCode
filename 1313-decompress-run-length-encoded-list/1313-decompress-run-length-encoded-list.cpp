class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> decompressed;
        for(int i=0; i<nums.size(); i=i+2){
            int freq = nums[i];
            int val = nums[i+1];
            for(int j=0;j<freq;j++)
                decompressed.push_back(val);
        }
        return decompressed;
    }
};