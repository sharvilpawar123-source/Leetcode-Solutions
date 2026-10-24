class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>l;
        for(int i=0;i<matrix.size();i++){
            int count=0;
            for(int j=0;j<matrix[0].size();j++){
                    count+=matrix[i][j];
                }
            l.push_back(count);
            }

        return l;
        }
    
};

