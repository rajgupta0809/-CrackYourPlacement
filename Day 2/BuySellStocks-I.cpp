class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int minimum = INT_MAX;
        
        for(int i=0;i<n;i++){
            if(prices[i] < minimum){
                minimum = prices[i];
            }
            int dif = prices[i] - minimum;
            if(profit < dif){
                profit = dif;
            }
        }
        return profit;
    }
};