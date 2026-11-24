class ProductOfNumbers {
public:
vector<int> vec;
vector<int> temp;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(vec.size()==0 || vec[vec.size()-1]==0) vec.push_back(num);
        else vec.push_back((vec[vec.size()-1])*num);
        if(temp.size()==0){
            if(num==0) temp.push_back(1);
            else temp.push_back(0);
        }
        else{
            if(num==0) temp.push_back(temp[temp.size()-1]+1);
            else temp.push_back(temp[temp.size()-1]);
        }
    }
    
    int getProduct(int k) {
        int i=vec.size()-k;
        if(i==0){
           if(temp[temp.size()-1]!=0) return 0;
           else return vec[vec.size()-1];
        }
        int ans=0;
        if(temp[temp.size()-1]==temp[i] && vec[i]!=0){
            if(vec[i-1]!=0) ans+=vec[vec.size()-1]/vec[i-1];
            else ans+=vec[vec.size()-1];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */