#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    //dummy use kiya kahe ki change ho jayega reverese marane par
    // previous ko vaha tak le bhi to jana padega na
    ListNode* reverseLinkedList(ListNode* head , int left , int right ){
        // if the same value
        if(left == right) return head; // no chnage if pointing the same node
        ///taking dummy node for this
        ListNode dummy;
        
        /// by chnace reverse from the start so we will take the prev pointer in the before the current start
        dummy.next = head;

        /// move pointer before the left pointer
        ListNode* prev = dummy.next;

        for(int i = 1; i < left ; i++){
            prev = prev->next;
        }

        // nex come from the 
        ListNode* current = prev->next;

        /// time to make th reversel the linked list
        for(int i = 0 ; i < right -left ; i++){
            // storing the prev and curren pointer relaiton safe
            ListNode* temp = prev->next;

            prev->next = current->next;
            
            // movind forward pointer
            current->next = current->next->next;

            prev->next->next = temp;
        }
    }
};

int main() {
    Solution sol;
    
    return 0;
}