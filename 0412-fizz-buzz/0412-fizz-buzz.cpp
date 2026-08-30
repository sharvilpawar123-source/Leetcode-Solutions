class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n+1,"0");
        int i=1;
    while(i!=n+1){
        if(i%3==0 && i%5==0){
            ans[i]="FizzBuzz";
        }
       else if(i%3==0){
            ans[i]="Fizz";
        }
        else if(i%5==0){
            ans[i]="Buzz";
        }
        else{
            ans[i]=to_string(i);

        }
        i++;

    }
    
    // for 1-indexed
    vector<string>ans1;
    for(int i=1;i<ans.size();i++){
        ans1.push_back(ans[i]);
    }
    return ans1;
    }
};