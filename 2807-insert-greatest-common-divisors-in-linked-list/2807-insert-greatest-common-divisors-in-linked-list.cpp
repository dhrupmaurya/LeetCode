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
    static int GCD(int a,int b){
            if(a==0 || b==0){
                return 0;
            }
            else if(a==b){
                return a;
            }
            else if(a>b){
                return GCD(a-b,b);
            }
            else if(b>a){
                return GCD(a,b-a);
            }
            return -1;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*current =head;
        while(current && current->next){
             int val1=current->val;
              int val2=current->next->val;
              int divisor=GCD(val1,val2);
              ListNode* newNode=new ListNode(divisor);

              newNode->next=current->next;
              current->next=newNode;

              current=newNode->next;

        }
        return head;
       
    }
};