class Solution {
public:
    int ceil(vector<int> &a,int x){
        int l = 0, h = a.size() - 1;
        while (l < h) {
            int m = l + (h - l) / 2; // To avoid overflow
            if (a[m] >= x) {
                h = m;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> b;
        int n=nums.size();
        b.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>b.back())
                b.push_back(nums[i]);
            else{
                int idx=ceil(b,nums[i]);
                b[idx]=nums[i];
            }
        }
        return b.size();
        
        
    }
};