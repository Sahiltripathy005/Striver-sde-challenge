class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int ans = 0 ;
        int mini = INT_MAX;

        for(int it:prices){
            mini = min(mini , it);
            ans = max(ans ,it-mini);
        }
        return ans ; 
    }
};