class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(int id:order){
            if(find(friends.begin(),friends.end(),id)!=friends.end()){
                ans.push_back(id);
            }
        }
        return ans;
    }
};