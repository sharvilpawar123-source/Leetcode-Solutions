1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4       int st=0;
5       int end=s.size()-1;
6       while(st<=end){
7        swap(s[st],s[end]);
8        st++;
9        end--;
10       } 
11       
12    }
13};