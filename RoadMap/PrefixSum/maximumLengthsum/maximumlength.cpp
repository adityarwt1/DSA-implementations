#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums , int k ){

        // scence check karane ke liye harame pass
        unordered_map<int , int> map;

        map[0] = -1;// from the start

        int prefixSum = 0 ;
        int maxLength =0;

        // lenght ke liye i se start karan ahai
    

        for(int i =  0 ; i < nums.size() ;i++){

            // prefixsum = 

            prefixSum += nums[i];

        /// wehre shoud he nutralize this
        int remainder = prefixSum -k;

        // finding the scene value
        if(map.find(remainder) != map.end()){
            maxLength = max( i - map[remainder ] ,maxLength );
            
        }

        // agar nahi hai to is ko stor karo
        if(map.find(remainder) == map.end()){
            map[prefixSum] = i;
        }
        }
    }

    
};

int main() {
    Solution sol;
    
    return 0;
}