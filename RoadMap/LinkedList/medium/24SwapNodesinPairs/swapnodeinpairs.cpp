#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // setup for the taking the starttin point of
      ListNode* dummy = new ListNode(0);
      dummy->next = head;
      ListNode* point = dummy;

      while(point->next && point->next->next){
        // 
        ListNode* swap1 = point->next;
        ListNode* swap2 = point->next->next;

        swap1->next = swap2->next;
        swap2->next = swap1;
        point->next = swap2;

        // time to start from the here
        point = swap1;
      }

      return dummy->next;

    }
};

int main() {
    Solution sol;
    
    return 0;
}