#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// my brute force solution 
/**
 * intutionc for this
 * i) k time tring for the twopointer
 * 
 */
    int longestOnes(vector<int>& nums, int k) {
            int maxLenght = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int opr = k;
            int length = 0 ;
            for(int j = i ; j < nums.size() ; j++ ){

                if(nums[j] == 1 ){
                    length++;
                }else if(opr == 0){
                    break;
                }
                
                if(nums[j] == 0 ){
                    opr--;
                    //in the zero case
                    length++;
                }  

                                  
            }

            maxLenght = max(length, maxLenght);
        }

        return maxLenght;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int result = sol.longestOnes(nums, 2);
    cout << result<< endl;
    return 0;
}