class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int> ans(n+m);
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                ans[k++]=nums1[i++];
            }
            else{
                ans[k++]=nums2[j++];
            }
        }
        while(i<n)
            ans[k++]=nums1[i++];
        while(j<m)
            ans[k++]=nums2[j++];
        int s=(n+m)/2;
        if((n+m)%2==0)
            return ((double)ans[s]+ans[s-1])/2;
        return ans[s];
    }
};