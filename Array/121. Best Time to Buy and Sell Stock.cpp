class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_price = 0;

        for(int prices : prices ) {
            min_price = min(min_price,prices);
            max_price = max(max_price,prices - min_price);
        }
        return max_price;
    }
};
