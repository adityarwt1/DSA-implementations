#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* frontNode; // head
    Node* rearNode;  // tail

public:
    MyQueue() {
        frontNode = nullptr;
        rearNode = nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        // If queue is empty
        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
            return;
        }

        rearNode->next = newNode;
        rearNode = newNode;
    }

    int dequeue() {
        if (frontNode == nullptr) {
            return -1; // empty
        }

        int val = frontNode->data;
        Node* temp = frontNode;
        frontNode = frontNode->next;

        // If queue becomes empty
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }

        delete temp;
        return val;
    }

    int front() {
        if (frontNode == nullptr) {
            return -1;
        }
        return frontNode->data;
    }

    bool empty() {
        return frontNode == nullptr;
    }
};
