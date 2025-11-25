#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findThemaxFrequency(vector<int> nums , int k ){

        unordered_map<int , int> hash;
        int maxFrequency = INT_MIN;

        // [1,2,4]
        for(int i = 0 ; i < nums.size() ; i++){
            int base = nums[i];
            
            if(k == 0) break;
            for(int j = 0; j < nums.size() ; j++){
                // for avoiding the biggerr nummber
                int operation = k;
                int sum = nums[j];//1

                if(sum > base) ; 
                // until it become the same value /// kepp oeration negative // keep hash the element
                
                while(sum <base && operation > 0){ // 5 operation
                    sum++;
                    operation--;
                }
                
                if(sum == base){
                    hash[base]++;
                }


            }
        }

        for(auto &p: hash){

         maxFrequency = max(maxFrequency, p.second);
        }

        return maxFrequency;

    }

    
    bool possibleWindow(vector<int>& nums, int k , int mid , int high , int diffrence){
        int sum = 0;
      
        for(int i = mid ; i <= high ;i++){
            sum += nums[high];
        }

        return sum - (nums[high] * diffrence)  <= k; 

    }
    

    int findMaxfrquencyElementBinarySearch(vector<int> nums, int k ){
        /// forting to valu
        sort(nums.begin() , nums.end());
        unordered_map<int, int> hash;

        for(int i = nums.size() ; i> 0 ; i--){

            int low = 0;
            int high  = i;
            //
            while(low <= high){
                int mid = floor((low + high) /2);
                int diffrence = high -mid;
                if(possibleWindow(nums, k , mid , high , diffrence)){
                  int oldValue = (hash.count(nums[high]) > 0)
                 ? hash[nums[high]]
                 : INT_MIN;

                    hash[nums[high]] = max(oldValue, diffrence);

                    high = mid -1;

                }
                else{
                    low = mid +1;
                }
            }
        }

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,4};
    vector<int> nums2 = {1,4,8,13};
    int result2 = sol.findThemaxFrequency(nums2 ,5);
    int result = sol.findThemaxFrequency(nums, 5);
    cout << result2 << endl;
    cout << result  << endl;
    return 0;
}