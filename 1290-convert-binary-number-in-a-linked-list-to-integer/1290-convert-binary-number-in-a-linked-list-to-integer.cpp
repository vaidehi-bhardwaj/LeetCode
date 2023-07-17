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
        int decimal = 0,count = -1;
        ListNode *p,*t;
        for(t=head;t!=NULL;t=t->next)
            count++;
        
        for(p=head;p!=NULL;p=p->next){
            decimal += (p->val)* pow(2,count);
            count--;
        }
        return decimal;
    }
};