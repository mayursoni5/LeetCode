class Solution {
    public void sortColors(int[] nums) {
        int l =0, mid =0, high= nums.length - 1;
        while(mid<=high){
            if(nums[mid] ==0){
                int temp = nums[l];
                nums[l] = nums[mid];
                nums[mid] = temp;
                l++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;

            else{
                int temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
                high--;
            }
        }
    }
}