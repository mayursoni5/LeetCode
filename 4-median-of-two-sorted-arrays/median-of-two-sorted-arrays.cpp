class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i =0; i < nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2 != 0 ){
            return nums1[nums1.size()/2];
        }
        else{
            double r = nums1.size()/2;
            double re = (nums1[r]+nums1[r-1])/2.0;
            return re;
        }
        
    }
};