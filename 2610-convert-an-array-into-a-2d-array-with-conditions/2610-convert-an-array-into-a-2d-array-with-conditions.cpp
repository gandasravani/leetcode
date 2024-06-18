class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<vector<int>> ans(1);
        for (const auto & num : nums) {
            if (m.count(num) == 0) { 
                ans[0].push_back(num);
                m[num] = 1;
            } else {
                if (ans.size() < m[num] + 1) {
                    ans.push_back({num});
                } else ans[m[num]].push_back(num); 
                m[num]++; 
            }
        }
        return ans;
    }
};