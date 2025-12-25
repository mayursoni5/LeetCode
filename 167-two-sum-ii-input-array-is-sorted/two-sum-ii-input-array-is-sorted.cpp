class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res ;
        int i =0, j = numbers.size() -1;
        while(i<j){
            int cur = numbers[i]+numbers[j] ;
            if(cur == target){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if(cur < target){
                i++;
            }
            else{
                j--;
            }
        } 
        return res;
    }
};