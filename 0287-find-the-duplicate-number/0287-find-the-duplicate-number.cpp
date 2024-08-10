class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m[nums[i]]>0)
                return nums[i];
            else
                m[nums[i]]++;
        }
        return 0;
    }
};