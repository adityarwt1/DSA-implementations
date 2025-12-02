#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0 ; 
        int right = height.size() -1;

        int leftMax = 0 ;
        int rightMax  = 0 ;
        int water = 0;

        while(left < right){

          if(height[left] < height[right]){
              // asignbt th if is bigger thant the  
              if(height[left] >= leftMax){
                leftMax = height[left];
              }else{
                water += leftMax - height[left];
              }

              left++;
          }
          else{
            if(height[right]>= rightMax){
              rightMax = height[right];
            }else{
              water += rightMax - height[right];
            }

            right--;
          }

        }

        return water;
    }
};

int main() {
    Solution sol;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int water = sol.trap(height);

    cout << water << endl;
    return 0;
}