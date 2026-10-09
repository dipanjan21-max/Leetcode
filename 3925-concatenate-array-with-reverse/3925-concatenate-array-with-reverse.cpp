class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
       //first make a array with elements 2n
       int n =nums.size();
               vector<int>res(n*2);
        //copy the first half
        for(int i=0;i<n;i++){
            res[i]=nums[i];
        }
        //for scound half reverse array
        for(int i=n,j=n-1;i<n*2;--j,++i){
            res[i]=nums[j];
        }
       return res; 
    }
};