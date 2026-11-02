class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());//sorting
        int middle=nums[n/2];//find middle
        long long moves=0;//initialize
        for(int num:nums){
            moves+=abs(num-middle);//take every diff btwn elements and the mid value

        }
        return moves;
        
    }
};