class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return ans;
    }
};