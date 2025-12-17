#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int count = 0;
        unordered_map<int, int> map;

        for(int i = 0 ; i < g.size(); i++){
            map[g[i]]++;
        }

        for(int i = 0 ; i < g.size() ; i++){
            if(map.find(g[i]) == map.end()){
                break;
            }else{
                count++;
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    
    return 0;
}

// first try
     // int n = min(g.size(), s.size());
        // int index = 0;
        
        // while(index < n){
        //     if(s[index] != g[index] ){
        //         break;
        //     }
        //     count++;
        //     index++;
        // }   

// result passed the testcase not the whole scenarion