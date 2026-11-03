class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxNum=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int num:nums){
            sum+=num;
            maxNum=max(num,maxNum);
        }
        return n*maxNum-sum;
    }
};