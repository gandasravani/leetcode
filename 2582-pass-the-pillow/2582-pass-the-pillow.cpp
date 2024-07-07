class Solution {
public:
    int passThePillow(int n, int time) {
        int j=1,d=0;
        for(int i=1;i<=time;i++){
            if(j==n){
                d=1;
            }
            if(j==1){
                d=0;
            }
            if(d==0)
                j++;
            if(d==1)
                j--;
        }
        return j;
        
    }
};