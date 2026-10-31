class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>finalans;
        stack<int>ans;
        for(int i=0;i<asteroids.size();i++){
            bool isBreak=false;
             while(!ans.empty() && ans.top()>0&& asteroids[i]<0){
                if(ans.top()<abs(asteroids[i])){
                    ans.pop();
                }
                else if(ans.top()==abs(asteroids[i])){
                    isBreak=true;
                    ans.pop();
                    break;
                }
                else{
                    isBreak=true;
                    break;
                }
             }
             if(!isBreak)ans.push(asteroids[i]);
            }    
        while(!ans.empty()){
            finalans.push_back(ans.top());
            ans.pop();
        }
        reverse(finalans.begin(),finalans.end());
        return finalans;
    }
};