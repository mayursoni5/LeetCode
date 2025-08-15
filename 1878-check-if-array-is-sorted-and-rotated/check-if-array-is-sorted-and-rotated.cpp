class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int b=0;
        for(int i = 0 ; i<n-1;i++){
            if(nums[i+1] < nums[i]){
                b++;
            }
        }
        if(nums[n-1]>nums[0]) b++;
        if(b>1) return false;
        return true;
    }
};