#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void moveZeroToEnd(vector<int>&nums ){
      // startfillingking with this element
        int index = 0 ;

        for(int i = 0 ;  i < nums.size() ; i++){
          // swaping not foud the zero 
          if(nums[i] !=  0){
            swap(nums[index] , nums[i]);
            index++;
          }

        }

        
    }
    /**
     * index zero se compare karunga next element ke liye the found the same as well made the current indx the num and replace the upcomming element witht 0 th ise the momve zeror to end patrter
     */
    vector<int> applyOperations(vector<int>& nums) {

      int n = nums.size();

      for(int i = 0 ; i < n -1 ; i++){

        // pahale vale se compare 
        
        if(nums[i] ==  nums[i+1]){

          nums[i] = nums[i] + nums[i+1];

          nums[i+1] = 0;
        }
      }
        moveZeroToEnd(nums);

        return nums;
      
    }
};
int main() {
    Solution sol;
    
    return 0;
}