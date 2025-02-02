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
    

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1 = list1, *p2 = list2, *p3=NULL;
        if(list1 == nullptr)
            return list2;
        else if(list2 == nullptr)
            return list1;
        if(p1->val <= p2->val){
            p3 = p1;
            p1=p1->next;

        }
        else {
            p3 = p2;
            p2 = p2->next;
            
        }
        
        ListNode *mergeHead = p3;

        while(p1 !=nullptr && p2 !=nullptr){
            if(p1->val <= p2->val){
                p3->next = p1;
                p1 = p1->next;
                
            }
            else{
                p3->next = p2;
                p2 = p2->next;
               
            }
            p3 = p3->next;
        
        }
        if(p1 != nullptr){
            p3->next = p1;
            
        }
        else if(p2 != nullptr){
            p3->next = p2;
           
        }
        
        return mergeHead;
    }

};