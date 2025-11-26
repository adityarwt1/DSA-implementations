#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroesBruteForce(vector<vector<int>>& matrix) {
        // usint th3e extra space for solvin ght equestion
        int n = matrix.size() ;
        int m = matrix[0].size();

        /// extra space
        vector<vector<int>> temp = matrix;
        
        for(int i =0 ; i < m ; i++){

            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    for(int k = 0 ; i < n ; k++){
                        temp[i][k] = 0;
                    }

                      for(int k = 0 ; i < n ; k++){
                        temp[k][j] = 0;
                    }
                }
            }
        }

        matrix = temp;
    }
};
int main() {
    Solution sol;
    
    return 0;
}