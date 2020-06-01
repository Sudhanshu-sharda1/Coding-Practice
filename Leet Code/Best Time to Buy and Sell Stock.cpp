    int maxProfit(vector<int>& prices) {
        
        int minprice = INT_MAX;
        int max_profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < minprice)
                minprice = prices[i];
            else if(prices[i]-minprice > max_profit)
                max_profit = prices[i] - minprice;
        }
        return max_profit;
    }
