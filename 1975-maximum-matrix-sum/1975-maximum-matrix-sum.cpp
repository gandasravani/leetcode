class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int min1=INT_MAX;
        int m=0;
        int zero=0;
        long long sum=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]==0)
                    zero++;
                if(matrix[i][j]<0){
                    m++;
                }
                min1=min(abs(matrix[i][j]),min1);
            }
        }
        if(m%2!=0){
            if(zero==0)
            sum-=2*abs(min1);
        }
        return sum;
        
    }
};