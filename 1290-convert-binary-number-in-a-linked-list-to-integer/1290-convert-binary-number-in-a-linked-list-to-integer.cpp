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
    int getDecimalValue(ListNode* head) {
        int num=0,a;ListNode * curr=head;string binary="";
        while(curr!=nullptr){
            num=num*2+curr->val;
            curr=curr->next;
        }
       return num;
    }
};