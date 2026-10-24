class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>vec(edges.size()+2,0);
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<2;j++){
                vec[edges[i][j]]++;
            }
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]==edges.size()){
                return i;
            }
        }
        return -1;
        

    }
};