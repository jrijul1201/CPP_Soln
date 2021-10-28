/* 
    Reverse nodes in k groups
  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/reverse-nodes-in-k-group/
    Author :- Arjyo Chakraborty [https://github.com/arjyo851]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || k == 1) return head;
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* cur = dummy, *nex = dummy, *pre = dummy;
        int count = 0;
        
        while(cur->next != NULL){
            cur = cur->next;
            count++;
        }
        
        while(count>=k){
            cur = pre->next;
            nex = cur->next;
            for(int i =1;i<k;i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            count -= k; 
        }
        return dummy->next;
    }
};