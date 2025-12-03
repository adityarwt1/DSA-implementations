#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class LinkedList{
    ListNode*  head;
    LinkedList(){
        head = NULL;
    }

    void insertTohead(int val){
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void insertTotail(int val){
        // asiging teh new node
        ListNode* newNode = new ListNode(val);

        // temp value
        ListNode* temp = head;

        // temp next value
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void print(){

        ListNode* temp =head;

        while(temp !=  NULL){
             cout << temp->val << endl;
             temp = temp->next;
        }
    }
};
// class MyLinkedList {
// public:
//     ListNode* head;

//     MyLinkedList() {
//         head = NULL;
//     }

//     // Insert at head
//     void insertAtHead(int val) {
//         ListNode* newNode = new ListNode(val);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Insert at tail
//     void insertAtTail(int val) {
//         ListNode* newNode = new ListNode(val);

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         ListNode* temp = head;
//         while(temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // Print list
//     void print() {
//         ListNode* temp = head;
//         while(temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// }
