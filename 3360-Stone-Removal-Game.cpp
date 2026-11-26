class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int x=10;
        bool AliceTurn=true;
    while(n>=x){
            n=n-x;
            x=x-1;
            AliceTurn=!AliceTurn;
    }
      if(AliceTurn){
        return false;
      }
      else{
        return true;
      }
        
    }
};