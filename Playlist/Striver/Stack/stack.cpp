#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int capacity;
    int top;
    int* arr;

public:
    Stack(int size) {
        capacity = size;
        top = -1;
        arr = new int[size];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peek() << endl;   // 30
    cout << st.pop() << endl;    // 30
    cout << st.pop() << endl;    // 20

    cout << "Current size: " << st.size() << endl;  // 1
}
