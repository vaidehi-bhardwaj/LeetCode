class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        
        for (int i = 0; i < queries.size(); i++) {
            int count = 0;
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
                
            for (int j = 0; j < points.size(); j++) {
               
                int d =(pow((points[j][0] - x), 2) + pow((points[j][1] - y), 2));
                if (d <= r*r)
                    count++;
            }
            
            answer.push_back(count);
        }
        
        return answer;
    }
};


