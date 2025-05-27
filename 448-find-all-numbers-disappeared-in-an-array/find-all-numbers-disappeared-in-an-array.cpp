class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]); // mark as seen
        }

        vector<int> missing;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                missing.push_back(i + 1); // not seen
            }
        }

        return missing;
    }
};
