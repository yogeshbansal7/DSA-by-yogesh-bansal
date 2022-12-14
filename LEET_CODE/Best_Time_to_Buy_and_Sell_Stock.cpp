int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        
        int profit = 0;
        int mini = INT_MAX;
        
        for(int i=0;i< prices.size(); i++){
            mini = min (prices[i] , mini);
            // maxi = max (prices[i] , maxi);
            profit = max(prices[i] - mini , profit);
        }
    
        
        
        return profit;
    }
