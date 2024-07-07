class Solution {
public:
    int numWaterBottles(int f, int ex) {
        int ans=f;
        int e=f;
        f=0;
        while(e>=ex){
            f+=e/ex;
            e=e%ex;
            ans+=f;
            e+=f;
            f=0;
        }
        return ans;
    }
};