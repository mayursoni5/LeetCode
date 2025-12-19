class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX, pro=0;
        for(int i = 0 ; i < prices.size();i++){
            if(prices[i]< min){
                min = prices[i];
            }
            pro = max(pro,(prices[i] - min));
        }
        return pro;
    }
};