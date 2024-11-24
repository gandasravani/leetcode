class Solution {
public:
    void nextPermutation(vector<int>& nums) {   
        int n=nums.size();
        int p=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                p=i-1;
                break;
            }
        }
        if(p!=-1){
            for(int i=n-1;i>p;i--){
                if(nums[i]>nums[p]){
                    int t=nums[i];
                    nums[i]=nums[p];
                    nums[p]=t;
                    break;
                }
            }
            reverse(nums.begin()+p+1,nums.end());
        }
        else
        reverse(nums.begin(),nums.end());
    }
};