class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int start=0;
        int count=0;
        for(int num:nums){
            if(num == target){
                count++;

            }
            if(num<target){
                start++;
            }
        }
        while(count--!=0){
            ans.push_back(start++);
        }
        return ans;
    }
};