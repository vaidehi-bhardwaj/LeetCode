class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
      
        int max = candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max)
                max=candies[i];
        }
        
        for(int i=0;i<candies.size();i++){
            int check=candies[i];
            check+=extraCandies;
            if(check>=max)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
};