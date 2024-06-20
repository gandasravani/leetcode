class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int l = 0;
        int r = 1e9;
        int curMax = 0;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (isValid(mid, position) >= m) { 
                l = mid + 1;
                curMax = max(curMax, mid);
            } else { 
                r = mid - 1;
            }
        }
        return curMax;
    }
    
    int isValid(int mid, vector<int> p) {
            int t = 1;
            int cd = p[0];
            for (int i = 1; i < p.size(); i++) {
                if (p[i] - cd >= mid) {
                    t++;
                    cd = p[i];
                }
            }
            return t;
        }
};