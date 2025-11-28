#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
int capasity;
int size;
int top;
int* arr;
public:
    MyStack(int size) {
        capasity = size;
        top = -1;
        arr = new int[size];
    }
    
    void push(int x) {
        // if the stack is empty
        if(top == -1){
            top = x;
        }else  { // if not inset in the last by checking also
            arr[top++] = x;
        }

    }
    
    int pop() {
        // if set is empty not nned to pop
        if(top == -1){
            return -1;
        }

    //    return  arr.pop_back();
    }
    
    int top() {
        return top;
    }
    
    bool empty() {
        if(top ==-1){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    //  MyStack sol;
    
    return 0;
}