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
// reverse linked list two intution
// take the left pointer to the prev 
// basically we are inserting in the head of linked list of all right node

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right == left) return head;
        // create the dummy node of the 
        ListNode dummy(0);
        
        // asign the head on the next value 
        dummy.next = head;

        /// takin the prev for the switch immediate level without any runtime error
        ListNode* prev = &dummy;

        for(int i = 1 ; i < left ;i++){
            prev  = prev->next;
        }

        ListNode* current = prev->next;

        for(int i = 0 ; i < right -left ;i++){
            ListNode* move = current->next;

            current->next = move->next;
            move->next = prev->next;
            prev->next = move;
        }

        return dummy.next;
    }
};

int main() {
    Solution sol;
    
    return 0;
}