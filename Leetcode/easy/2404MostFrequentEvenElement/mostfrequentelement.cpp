#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // to ensure smallest number wins tie

        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        int bestEven = -1;
        int bestFreq = 0;

        for (auto &p : mp) {
            int number = p.first;
            int freq = p.second;

            if (number % 2 == 0) {
                if (freq > bestFreq || (freq == bestFreq && number < bestEven)) {
                    bestFreq = freq;
                    bestEven = number;
                }
            }
        }

        return bestEven;
    }
};

class ProLeet {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sorting makes counting easy
        
        int ans = -1;
        int maxi = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){ // only even
                count = 1;
                
                // count same consecutive elements
                while(i + 1 < nums.size() && nums[i] == nums[i + 1]){
                    count++;
                    i++;
                }
                
                if(count > maxi){
                    maxi = count;
                    ans = nums[i];
                }
            }
        }
        
        return ans;
    }
};

/**
 * leet ne sirft alloow kiya even number ko
 */
class MyIntution{
    public:
    int mostEvenFrequet(vector<int>& nums){
        /// sortin becuaesr the only even with wei
        sort(nums.begin(), nums.end());


        int even= -1;
        int bestFr  = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){

            if(nums[i] % 2 == 0){ /// this line make everything simpleer
                
                int count = 1;

                /// counting until goest to eleme
                while(i+1 <nums.size() && nums[i] == nums[i+1]){

                    count++;
                    i++;
                }

                if(count >  bestFr ){
                    even = nums[i];
                    bestFr = count;
                }
            
            }
        }

        return even;

    }
};
int main() {
    Solution sol;
    vector<int> nums = {0,1,2,2,4,4,1};
    int result = sol.mostFrequentEven(nums);
    cout << result << endl;
    return 0;
}
