class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int ans=INT_MIN;
        int min=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<min)
                min=prices[i];
            else
                ans=max(ans,prices[i]-min);
        }
        if(ans==INT_MIN)
            return 0;
        return ans;
    }
};