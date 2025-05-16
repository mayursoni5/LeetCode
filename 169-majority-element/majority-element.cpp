class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = nums[0];
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (el == nums[i])
                cnt++;
            else {
                cnt--;
                if (cnt == 0) {
                    el = nums[i];
                    cnt++;
                }
            }
        }
        return el;
    }
};