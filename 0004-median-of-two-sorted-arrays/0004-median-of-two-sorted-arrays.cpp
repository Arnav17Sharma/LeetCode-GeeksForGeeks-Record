class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums2.insert(nums2.end(), nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if(nums2.size()%2){
            return nums2[(nums2.size())/2];
        }
        double d = (nums2[(nums2.size())/2] + nums2[(nums2.size())/2 - 1])/2.0;
        return d;
    }
};