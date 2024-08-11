class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(target==matrix[i][0]||target==matrix[i][m-1])
                return true;
            else if(target>matrix[i][0]&&target<matrix[i][m-1]){
                int l=0,h=m-1;
                while(l<=h){
                    int m=(l+h)/2;
                    if(matrix[i][m]==target)
                        return true;
                    else if(matrix[i][m]<target)
                        l=m+1;
                    else
                        h=m-1;
                }
            }
            else continue;
        }
        return false;
    }
};