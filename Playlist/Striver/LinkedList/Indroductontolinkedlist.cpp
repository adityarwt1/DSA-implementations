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

    void deleteNode(int val){
        // if head is mepty
        if(head == nullptr){
            return ;
        }  
        

        // if the the head itself the 

        if(head->data ==val){
            // this is pointing show we are declare
            Node* temp = head;
            head  = head->next;
            delete temp;
            return ;
        }

        Node* curr =head;

        while(curr->next !=  nullptr){

            if(curr->next->data == val){
                Node* temp = head;
                temp->next  = temp->next->next;

                delete  temp;
                return ;
            }

            curr = curr->next;
        }
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);

    // bool result = list.findValue(20);
    // if (result) cout << "Value found" << endl;

    list.deleteNode(10);

    list.display();
    return 0;
}
