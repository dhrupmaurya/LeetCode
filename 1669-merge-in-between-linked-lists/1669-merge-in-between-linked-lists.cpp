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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1,*temp2=list1,*temp3=list2;
        int i=0,j=0;
        while(i<a-1){
            temp1=temp1->next;
            i++;
        }
        while(j<b){
            temp2=temp2->next;
            j++;
        }
        temp1->next=list2;
        while(temp3->next!=nullptr){
            temp3=temp3->next;
        }
        temp3->next=temp2->next;

        return list1;

    }
};