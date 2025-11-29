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

    /**
     * intiution yahi hai ki runtime me kitane dino me kitana profit ban raha usako nikal sakate hai
     * mini
     */
    int bestTimeToSellTheStock(vector<int>& nums){
      
      int minimum = nums[0];

      int maxProfit = INT_MIN;
      for(int i = 1 ; i < nums.size() ; i++){

        // agar choota hai to current replace kardo usaka // equal to lagane ki koi jarurat nahi age ka calculate ho jayega
        if(nums[i] < minimum){
          minimum = nums[i];
        }else{// calculate the profit
          int profit = nums[i] - minimum;
          maxProfit = max(profit, maxProfit);
        }
      }

      // edge case for the solution 
      if(maxProfit == INT_MIN) return 0;
      return maxProfit;

    }
};
int main() {
    Solution sol;
    vector<int> nums = {7,1,5,3,6,4};
    int result = sol.bestTimeToSellTheStock(nums);
    cout << result << endl;
    return 0;
}