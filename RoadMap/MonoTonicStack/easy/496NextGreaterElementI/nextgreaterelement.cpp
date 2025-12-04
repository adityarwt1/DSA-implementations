#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // storing the greate element for tghe nums21 vector
         unordered_map<int ,int> nge;

         // when at the end of the stack have the greater element
         stack<int> st;


         // nums2 for the comparigng the nums1 value
         for(int num :nums2){

            // if the currren value larger so tha tthe next value is also the larger
            while(!st.empty() && num > st.top()){
                nge[st.top()] = num;
                st.pop();
            }
            // starogint the value
            st.push(num);
         }
         
         // remainng element have no enxt greter elemen
         while(!st.empty()){
            nge[st.top()] = -1;
            st.pop();
         }

         vector<int> ans;
         for(int num:nums1){
            ans.push_back(nge[num]);
         }

         return ans;
    }


};
int main() {
    Solution sol;

    return 0;
}
/// notte by own
/// hame num2 ke compition me nikalana ha isliye num to ka use karen
// start current eleme bada stack ke top se to top ke liye vahi great emelent hoga

// at the end of the agar eleme exist karata hai to vahi return kar dena hai

/// num nki value check karenge kya exist karenge
