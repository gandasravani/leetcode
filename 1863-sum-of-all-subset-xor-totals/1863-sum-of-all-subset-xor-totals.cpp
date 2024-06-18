class Solution {
public:
    int ans=0;
    void subs(vector<int>& nums,int idx,int sum,int n){
        if(idx==n){
            ans+=sum;
            return;
        }
        subs(nums,idx+1,sum^nums[idx],n);
        subs(nums,idx+1,sum,n);
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        subs(nums,0,0,n);
        return ans;
        
    }
};