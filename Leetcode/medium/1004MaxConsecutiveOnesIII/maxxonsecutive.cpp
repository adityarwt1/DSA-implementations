#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// my brute force solution 
/**
 * intutionc for this
 * i) k time tring for the twopointer
 * ii) when found the 0 counting itself becuse the and minuse the operation 
 * iii) imporve ment needed like start from the where end the last opr thing
 */
    int longestOnesBrute(vector<int>& nums, int k) {
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

    /**
     * i) taking left as a variable instead of brute force
     * ii) some observation found the when the 
     * iii) k se jayda hoga to left plus karenge
     */
    int longestOnes(vector<int>& nums , int k){
        int left = 0 ;

        // window have zero
        int zeroCount = 0;

        // for the length comparision
        int maxLength = 0;


        for(int right = 0 ; right < nums.size() ; right++){
            // plush the zero count
            if(nums[right] == 0)zeroCount++;

            // time to shirk when to much zeroes
            while(zeroCount > k){
                // for the longest se samajha karana padata hai
                if(nums[left] == 0) zeroCount--;
                left++;
            }

            // calculating the window sum
            maxLength = max(maxLength , right - left +1);
        }

        return maxLength;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int result = sol.longestOnes(nums, 2);
    cout << result<< endl;
    return 0;
}