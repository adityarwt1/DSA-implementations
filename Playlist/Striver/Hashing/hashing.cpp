#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void hashingNumber(vector<int> nums){
         unordered_map<int, int> hash;
    vector<int> nums = {5, 2, 5};

    // build the hash map
    for(int x : nums){
        hash[x]++;
    }

    // check existence
    if(hash.find(nums[0]) != hash.end()){
        cout << nums[0] << " exists in map\n";
    }
    else{
        cout << nums[0] << " not found\n";
    }

    }
};

int main() {
    Solution sol;
    
    return 0;
}