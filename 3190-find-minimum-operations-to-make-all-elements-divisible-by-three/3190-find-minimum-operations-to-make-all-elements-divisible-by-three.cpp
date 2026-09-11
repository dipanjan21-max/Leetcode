class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int res=0;
        for(int val:nums){
            res+=val%3;
            if(val%3==2)
            res-=1;
        }
        return res;
    }
};