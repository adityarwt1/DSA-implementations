#include <bits/stdc++.h>
using namespace std;


class LinkedList{
    public:
        struct Node{
            int data;
            Node* next;
            Node(int val){
                data = val;
                next= nullptr;
            }
        };


        Node* head;

        LinkedList(){
            head = nullptr;
        }

        void insert(int val){
            Node* newNode = new Node(val);

            // if head is empty
            if(!head){
                head = newNode;
                return;
            }

            // currentnode
            Node* temp = head;


            while(temp->next != nullptr){
                // linear travel
                temp = temp->next;
            }

            temp->next = newNode;
        }

        void display(){
            Node* temp = head;

            while(temp != nullptr){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }

        bool findValue(Node* head , int target){

            if(!head) return false;

            Node* temp = head;

            while(temp != nullptr){
                if(temp->data == target){
                    return true;
                }

                temp = temp->next;
            }

            return false;

        }
};
class Solution {
public:


};

int main() {
    Solution sol;
    LinkedList list;

    list.insert(10);
    list.insert(20);

    
    list.display();
    return 0;
}