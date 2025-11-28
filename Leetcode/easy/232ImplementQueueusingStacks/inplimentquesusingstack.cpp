#include <bits/stdc++.h>
using namespace std;

// solving the inpliment quest usint the using extrapaces with the two stack inputand the oputput
class MyQueue {
 public:
  void push(int x) {
    input.push(x);
  }

  int pop() {
    peek();
    const int val = output.top();
    output.pop();
    return val;
  }

  int peek() {
    if (output.empty())
      while (!input.empty())
        output.push(input.top()), input.pop();
    return output.top();
  }

  bool empty() {
    return input.empty() && output.empty();
  }

 private:
  stack<int> input;
  stack<int> output;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {
    // Solution sol;
    
    return 0;
}