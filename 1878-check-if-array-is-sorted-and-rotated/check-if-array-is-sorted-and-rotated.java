class Solution {
    public boolean check(int[] nums) {
        int n = nums.length, b=0;
        for(int i = 1; i<n; i++){
            if(nums[i-1]>nums[i]) b++;
        }
        if(nums[n-1]>nums[0]) b++;

        if(b>1) return false;

        return true;

    }
}