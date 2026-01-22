#include <bits/stdc++.h>
using namespace std;

class BubbleSort {
    public: 
    void bubbleSortBruteForce(vector<int>& nums){
        int n = nums.size();

        for(int i = n -1; i>= 0; i--){
            for(int j = 0; j <= i-j; j++){
                if(nums[j]> nums[i]){
                    swap(nums[j], nums[i]);
                }
            } 
        }
    }

    void optimalBruteForceSolution(vector<int>& nums){
        int n  = nums.size();

        for(int i  = n -1; i >=0; i--){
            int diswap = 0;
            for(int j = 0; j<=i -j ; j++){
                swap(nums[j] , nums[i]);
                diswap = 0;
            }

            if(diswap ==0 ){
                break;
            }
        }
    }
};

int main(){
    BubbleSort sorter;
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    sorter.bubbleSortBruteForce(nums);
    sorter.optimalBruteForceSolution(nums);
    return 0;
}