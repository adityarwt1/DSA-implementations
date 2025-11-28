#include <bits/stdc++.h>
using namespace std;

class MyStack {
 public:
  void push(int x) {
    // push initilally 
    q.push(x);

    // this will take in the front because que me to sab rear pe hi latgata hai
    for(int i = 0 ; i < q.size() -1 ; i++){
        // push in the front
        q.push(q.front());
        q.pop();
    }



    
  }

  int pop() {
    // queue me fron hi to jayeta pahale excutiono ke liye
    const int val= q.front();
    /// exculte kara dena us vlaue jo fron me hai 
    q.pop();
    /// just returning the poped value becausae questoin says
    return val;
  }

  int top() {   
    /// fron hi to top hota hhai que me 
    return q.front();
  }

  bool empty() {
    // que have the internally build in the 
    return q.empty();
  }

 private:
  queue<int> q;
};

int main() {
    // Solution sol;
    
    return 0;
}