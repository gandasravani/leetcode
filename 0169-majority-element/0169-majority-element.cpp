class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=nums.size()/2;
        for(auto& i:m){
            if(i.second>k)
                return i.first;
        }
        return 0;
    }
};