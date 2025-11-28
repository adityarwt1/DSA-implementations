#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head;   // top of the stack

public:
    MyStack() {
        head = nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    int pop() {
        if (head == nullptr) {
            return -1;  // stack underflow
        }

        int val = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return val;
    }

    int top() {
        if (head == nullptr) {
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == nullptr;
    }

    ~MyStack() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main(){
    
    return 0;
}