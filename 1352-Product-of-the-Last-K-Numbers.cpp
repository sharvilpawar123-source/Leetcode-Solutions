class ProductOfNumbers {
public:
vector<int>vec;
    ProductOfNumbers() {
        vec.push_back(1);
    }
    
    void add(int num) {
        vec.push_back(num);
    }
    
    int getProduct(int k) {
        reverse(vec.begin(),vec.end());
        int product=1;
        for(int i=0;i<k;i++){
            product*=vec[i];
        }
        reverse(vec.begin(),vec.end());
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */