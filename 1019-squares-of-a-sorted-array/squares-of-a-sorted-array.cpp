class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sq(n);
        int l =0, r=n-1;
        int idx = n-1;
        while(l<=r){
            int leftSq = nums[l] * nums[l];
            int rightSq = nums[r] * nums[r];
            if(leftSq > rightSq){
                sq[idx]= leftSq;
                idx--;
                l++;
            }
            else{
                sq[idx]= rightSq;
                idx--;
                r--;
            }
        }
        return sq;
    }
};