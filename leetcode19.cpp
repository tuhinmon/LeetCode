//Best Time to Buy and Sell Stock II
int maxProfit(vector<int>& prices) {
        int ans=0;
        int n= prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                ans = ans+(prices[i]-prices[i-1]);
            }
        }
        return ans;
        
    }