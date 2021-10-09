/*  
    Difficulty :- Easy
    Ref :- https://leetcode.com/problems/linked-list-cycle/
    Author :- AmitThakur [https://github.com/AmitThakur045]
*/

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL) {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next and fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow) return true;
        }
        return false;
    }
};