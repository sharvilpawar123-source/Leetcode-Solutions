class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int ans=0;
        vector<int>doTrust(n+1,0);        
        vector<int>onTrust(n+1,0);        
        for(int i=0;i<trust.size();i++){
               onTrust[trust[i][0]]++;
               doTrust[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(doTrust[i]==n-1 && onTrust[i]==0){
                return i;
            }

        }
        return -1;
    }
};