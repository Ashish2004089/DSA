class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //ye stock buy and sell se alag hai isme multiple buy kr skte hai 
        
        int profit = 0;
        int n = prices.size();
        for(int i =1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
                profit +=prices[i]-prices[i-1];
        }
        return profit;
        
    }
};