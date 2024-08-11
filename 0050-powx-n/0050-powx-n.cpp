class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){
            n=abs(n);
            while(n>0){
                if(n&1==1)
                    ans*=x;
                x=x*x;
                n/=2;
            }
            ans=1/ans;
        }
        else{
            while(n>0){
                if(n&1==1)
                    ans*=x;
                x=x*x;
                n/=2;
            } 
        }
        return ans;
        
    }
};