#include <bits/stdc++.h>
using namespace std;

class SortingAlgo {
  public:
  void selectionSort(vector<int>& nums){
    int n = nums.size(); // 6 

    for(int i = 0 ; i < n -1 ; i++){
      int mini = i; // 0

      for(int j = i +1; j < n ; j++){
        // upcomming one least or not
        if(nums[j] < nums[i]){
          mini = j; // if found the least one replace 
        }
      }

      /// the value of the small
      int temp = nums[mini];
      // swapping who found in the current value
      nums[mini] = nums[i];
      nums[i] = temp;
    }
    return;
  }
};

int main(){
  SortingAlgo sort;
  vector<int> nums = {13,46,24,52,20,9};
  sort.selectionSort(nums);
  cout << "Sorted array: ";
  for(int num : nums){    
    cout << num << " ";
  }
  return 0;
}