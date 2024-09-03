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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head){
            return NULL;
        }
        ListNode * temp=head, *t=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==1 && n==1){
            return NULL;
        }
        if(count==n){
            head=head->next;
        }
        int delInd=count-n;
        for(int i=0;i<delInd-1;i++){
            t=t->next;
        }
        t->next=t->next->next;
        return head;
        
           
    }
};

