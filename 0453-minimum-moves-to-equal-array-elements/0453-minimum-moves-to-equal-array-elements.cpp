class Solution {
public:
    int minMoves(std::vector<int>& nums) {

        int minval= *std::min_element(nums.begin(),nums.end());
        int moves=0;
        for(int num: nums){
            moves+=num-minval;
        }        
        return moves;
    }
};