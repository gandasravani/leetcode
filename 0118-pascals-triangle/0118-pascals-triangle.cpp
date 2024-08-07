class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1)
            return {{1}};
        if(numRows==2)
            return {{1},{1,1}};
        vector<vector<int>> ans(numRows);
        ans[0].push_back(1);
        for(int i=1;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    ans[i].push_back(1);
                else{
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
        }
        return ans;
        
    }
};