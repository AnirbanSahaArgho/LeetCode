class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();

        if(n%2 == 0){
            int a = n/2;
            int b = (n/2)-1;
            return (nums1[a] + nums1[b])/2.0;
        }else{
            return nums1[n/2];
        }
    }
};