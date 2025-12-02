#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target)
                return {left + 1, right + 1};   // FIXED: 1-indexed result

            else if (sum < target)
                left++;   // need larger sum

            else
                right--;  // need smaller sum
        }

        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int > numbers = {2,7,11,15};
    int target = 9;
    vector<int> answer = sol.twoSum(numbers, target);

    for(auto ans:answer){
        cout << ans<< endl;
    }
    
    return 0;
}