class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low = 0;
        int high = n;
        while(high >= low){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            } 
            else if (nums[mid] > target){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};