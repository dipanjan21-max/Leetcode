class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        bool flag=true;//initialize
        //if nums[i]=i then the array is sorted then return 0
        for(int i=0;i<n;i++){
            if(nums[i]!=i){ 
                flag=false;
               ans &=i; 
            }
        }
        if(flag){
            return 0;
        }
        return ans;
    }
};