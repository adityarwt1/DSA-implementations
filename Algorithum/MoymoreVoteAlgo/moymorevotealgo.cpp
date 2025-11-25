#include <bits/stdc++.h>
using namespace std;
/// this algo come from the vote counting effect let say countin with one whe get the another part bill need to substracty them 

class Solution {
public:
    int mostFrequantElement(vector<int> nums){
        
        int ele = 0;
        int count = 0;

        for(int i = 0 ; i < nums.size() ; i++){

            if(count == 0){
                ele = nums[i];
            }
            // counting the element 
            if(nums[i] == ele){
                count++;
            }

            else{
                count--;
            }
        }

        return ele;
    }
};

int main() {
    Solution sol;
    
    return 0;
}