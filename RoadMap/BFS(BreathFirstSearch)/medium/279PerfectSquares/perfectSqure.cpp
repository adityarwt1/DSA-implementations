#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        vector<bool> visited(n + 1, false);

        q.push(n);
        visited[n] = true;

        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            level++;

            while (size--) {
                int current = q.front();
                q.pop();

                // Try subtracting perfect squares
                for (int sq = 1; sq * sq <= current; sq++) {
                    int next = current - sq * sq;

                    if (next == 0) return level; // found exact sum

                    if (!visited[next]) {
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }

        return level;
    }
};


int main() {
    Solution sol;
    
    return 0;
}