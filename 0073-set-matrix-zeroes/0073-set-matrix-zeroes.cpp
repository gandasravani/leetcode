class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> r,c;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r.find(i)!=r.end())
                    matrix[i][j]=0;
                if(c.find(j)!=c.end())
                    matrix[i][j]=0;
            }
        }
        
    }
};