class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=nums.size()/3;
        for(auto& i:m){
            if(i.second>k)
                ans.push_back(i.first);
        }
        return ans;
    }
};