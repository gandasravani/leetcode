class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long m = 1;
        int p = 0;
        int idx = 0;

        while (m <= n) {
            if (idx < nums.size() && nums[idx] <= m) {
                m += nums[idx];
                idx++;
            } else {
                m += m;
                p++;
            }
        }

        return p;
    }
};