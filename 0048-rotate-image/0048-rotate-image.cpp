class Solution {
public:
    void rotate(vector<vector<int>>& ma) {
        int n=ma.size(),m=ma[0].size();
        for(int k=1;k<n;k++){
            int j=0,i=k;
            while(i<n){
                int t=ma[i][j];
                ma[i][j]=ma[j][i];
                ma[j][i]=t;
                i++;
                j++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m/2;j++){
                int t=ma[i][j];
                ma[i][j]=ma[i][m-j-1];
                ma[i][m-j-1]=t;
            }
        }
        
        
    }
};