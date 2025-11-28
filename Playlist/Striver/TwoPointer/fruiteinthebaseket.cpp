#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long calCulateTotalFruite(vector<int>& nums , int left , int right){
        long long result = 0;

        for(int left = left ; left <= right ; left++){
            result += nums[left];
        }

        return result;
    }
    int fruiteIntheBasket(vector<int>& nums){
        // taking set 
        
        int left = 0;
        int maxLenght = 0;
        long long fruiteIntheBasket= 0;

        for(int right = 0 ; right < nums.size();right++){
            unordered_set<int>  set;
            // isertin in the set for the for checking the 
            set.insert(nums[right]);

            if(set.size() >1 ){

                fruiteIntheBasket = max(fruiteIntheBasket, calCulateTotalFruite(nums, left ,right));
                left = right+1;
                set.erase(set.begin() , set.end());
                maxLenght = max(maxLenght, right - left+1);
            }
 
        }

        return fruiteIntheBasket;
    }    
};

int main() {
    Solution sol;
    
    return 0;
}