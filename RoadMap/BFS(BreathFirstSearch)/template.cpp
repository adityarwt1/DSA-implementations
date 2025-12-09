#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void BFS(int start , vector<vector<int>>& graph){
        /// start in the starrting point and given graph is the starting point for this graph
        queue<int> q;
        // jo pahale mila usako pahale process karo

        vector<int> visited(graph.size() , 0); // 0 means not visitef one mens visited

        q.push(start);
        /// [1,2,3]
        visited[start]= 1;

        while(!q.empty()){
            int node = q.front(); /// taing the front 
            q.pop();

            for(int nei :graph[node]){
                // visiting the neighjboour if not exit ini the visited
                if(!visited[nei]){
                    // this wiull marked
                    visited[nei] =1;
                    // push neighbour into que
                    q.push(nei);
                }
            }
        }
    }

    void myBFS(int start, vector<vector<int>>& graph){

        queue<int> q;

        vector<int> visited(graph.size() , 0);

        visited[start] =1;
        q.push(start);

        while(!q.empty()){
            // pahala eleemnt nikalata hai
            int node = q.front();

            q.pop();


            for(int nei:graph[node]){
                if(!visited[nei]){
                    visited[nei] = 1;
                    q.push(nei);
                }
            }
        }
        
    }
};

int main() {
    Solution sol;
    
    return 0;
}