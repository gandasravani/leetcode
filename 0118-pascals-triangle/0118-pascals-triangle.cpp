class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> A(i+1);
            A[0]=1;
            A[i]=1;
            for(int j=1;j<i;j++){
                A[j]=res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(A);
            
        }
        return res;
        
        
    }
};