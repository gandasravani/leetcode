class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        int s=in[0][0],e=in[0][1];
        for(int i=1;i<n;i++){
            if(in[i][0]>=s&&in[i][0]<=e){
                s=min(s,in[i][0]);
                e=max(e,in[i][1]);
            }
            else{
                ans.push_back({s,e});
                s=in[i][0];
                e=in[i][1];
            }
        }
        ans.push_back({s,e});
        return ans;
    }
};