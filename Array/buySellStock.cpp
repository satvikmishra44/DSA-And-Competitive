class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int low = prices[0];
        int high = 0;
        int profit = 0;
        int temp = 0;

        for(int i = 1; i<len; i++){
            if(prices[i] < low){
                low = prices[i];
            }
            if(prices[i] > high){
                profit = max(profit, prices[i] - low);
            }
        }

        return profit;
    }
};
