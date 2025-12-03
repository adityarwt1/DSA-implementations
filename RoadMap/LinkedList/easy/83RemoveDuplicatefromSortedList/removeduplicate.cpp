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
    ListNode* deleteDuplicates(ListNode* head) {
            // current pointer banayu
            // temp is the new ponter to seek the value
        ListNode* temp = head;

        // corrent order matter
        while(temp && temp->next){

            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }else{ // kyu ki ek ki jagah do bhi ho sakata hai
                temp = temp->next;
            }
        }

        // not returing the temp becuase these pointer in the nulll so returnin the head
        return head;
    }
};
int main() {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(2);
    sol.deleteDuplicates(head);

  
    return 0;
}