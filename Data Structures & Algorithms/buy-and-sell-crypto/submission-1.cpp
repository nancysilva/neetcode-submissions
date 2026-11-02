class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int betterProfile = 0;

        for (int i = 1; i<prices.size(); i++){
            if (prices[i]< buyPrice){
                buyPrice = prices[i];
            }
            if (prices[i] - buyPrice > betterProfile){
                betterProfile = prices[i] - buyPrice;
            }
        }
        return betterProfile;
        
    }
};
