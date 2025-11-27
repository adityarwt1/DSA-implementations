#include <bits/stdc++.h>
using namespace std;

class LinkedList {
public:
    struct Node {
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void display() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    bool findValue(int target) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == target)
                return true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);

    bool result = list.findValue(20);
    if (result) cout << "Value found" << endl;

    list.display();
    return 0;
}
