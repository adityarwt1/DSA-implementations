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

/*
    TRAPPING RAIN WATER (Two Pointer + Boundary Pattern)

    Pattern Summary:
    ------------------------------------
    Water trapped at index i depends on:
        min(leftMax, rightMax) - height[i]

    Why Two Pointers?
    ------------------------------------
    The smaller boundary (left or right) ALWAYS limits the water height.
    So we move the pointer on the side with the smaller height.

    Key Variables:
        left        → pointer from start
        right       → pointer from end
        leftMax     → highest wall seen from the left
        rightMax    → highest wall seen from the right
        water       → total water trapped

    Two-Pointer Rule:
    ------------------------------------
    If height[left] < height[right]:
        left side is the bottleneck
        if height[left] >= leftMax:
            update leftMax
        else:
            water += leftMax - height[left]
        left++

    Else:
        right side is the bottleneck
        if height[right] >= rightMax:
            update rightMax
        else:
            water += rightMax - height[right]
        right--

    Time Complexity:     O(n)
    Space Complexity:    O(1)

    Intuition (1 line):
    ------------------------------------
    Water level is decided by the smaller boundary,
    so always move the pointer on the smaller side.
*/
