class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int is= 0;
        int ms= 0;
        int ws= 0;
        
        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                is += customers[i];
            } else if (i < minutes) {
                ws += customers[i];
            }
        }
        
        ms = ws;
        
        for (int i = minutes; i < customers.size(); ++i) {
            ws += customers[i] * grumpy[i];
            ws -= customers[i - minutes] * grumpy[i - minutes];
            ms = max(ms,ws);
        }
        
        return is+ ms;   
    }
};