class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=0,k=n-1,l=m-1;
        while(true){
            if((i<k)||(i==k&&j<=l)){
                if(target==matrix[(i+k)/2][(j+l)/2])
                    return true;
                else if(target<matrix[(i+k)/2][(j+l)/2]){
                    if(l==0){
                        k=k-1;
                        l=m-1;
                    }
                    else{
                        l--;
                    }
                }
                else{
                    if(j==m-1){
                        i++;
                        j=0;
                    }
                    else
                        j++;
                }
            }
            else break;;
        }
        return false;
    }
};