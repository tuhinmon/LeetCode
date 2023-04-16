//Best Time to Buy and Sell Stock
int maxProfit(vector<int>& prices) {
         int n = prices.size();
        int maxi =0;
        int mine = INT_MAX;
        for(int i=0;i<n;i++){
            mine = min(mine,prices[i]);
            maxi = max(maxi,prices[i]-mine);
        }
        return maxi;
        
        
    }