class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        for(int row =0; row <numRows; row++){
            if(row==0)
                triangle.push_back({1});
            else{
                vector<int> prevRow = triangle[row-1];
                vector<int> newRow = {1};
                
                for(int i=0;i<row-1;i++)
                    newRow.push_back(prevRow[i]+prevRow[i+1]);
                newRow.push_back(1);
                triangle.push_back(newRow);
            }
        }
        return triangle;
    }
};