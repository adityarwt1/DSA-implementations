#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // pointer who have pointing to the num1 array
        // pointer who have pointing to the num2 array
        // declaring the merge pointer
        int p1 = m -1;
        int p2 = n -1;
        int p = m+n -1;

        while(p2>= 0){
            // compare the last element is larger or not
            if(p1 >= 0 && nums1[p1] > nums2[p2]){
                nums1[p] = nums1[p1];
                p1--;
            }

            else{
                nums1[p] = nums1[p2];
                p2--;
            }

            p--;
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    sol.merge(nums1 , 3, nums2 , 3);
    return 0;
}