class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size();
        int profit=0;
        for(i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]){
                profit=profit+(prices[i+1]-prices[i]);
            }
        }
        return profit;
    }
};