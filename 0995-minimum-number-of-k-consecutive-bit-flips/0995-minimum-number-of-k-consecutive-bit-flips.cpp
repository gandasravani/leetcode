class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int f= 0;
        int res = 0;
        vector<int> flip(n, 0);

        for (int i = 0; i < n; ++i) {
            if (i >= k) {
                f^=flip[i - k];
            }
            if (f== nums[i]) {
                if (i + k > n) {
                    return -1;
                }
                flip[i] = 1;
                f^= 1;
                res++;
            }
        }

        return res;
    }
};