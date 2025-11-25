#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int mini  = prices[0];

        for(int i = 1; i < prices.size() ; i++ ){

          if(prices[i] < mini)  mini  = prices[i];

          else{
            int profit = prices[i] - mini;
            maxProfit  = max(maxProfit, profit);
          }
        }
        
        if(maxProfit == INT_MIN) return 0;
        return maxProfit;
    }
};
int main() {
    Solution sol;
    
    return 0;
}