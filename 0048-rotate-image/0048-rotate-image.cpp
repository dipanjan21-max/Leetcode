class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose
     for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                std::swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse
        for(int i=0;i<n;i++){
            std::reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};