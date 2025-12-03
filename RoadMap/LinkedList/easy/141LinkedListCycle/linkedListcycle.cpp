#include <bits/stdc++.h>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;

        ListNode* slow= temp;
        ListNode* fast = temp;

        while(fast && fast->next){
            
          slow = slow->next;
          fast = fast->next->next;

          if(slow == fast){
            return true;
          }
        }

        return false;
    }
};
int main() {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next =new ListNode(2);
    head->next->next = new ListNode(3);

    

     
    return 0;
}