class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mpp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int n = target - nums[i];
            if(mpp.containsKey(n)){
                return new int[]{mpp.get(n),i};
            }
            mpp.put(nums[i],i);
        }
        return new int[]{};
    }
}