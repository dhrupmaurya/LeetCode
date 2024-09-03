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
    ListNode* CreateNode(vector<int>v){
       ListNode *head=NULL;
       ListNode*current=NULL;
        int n=v.size();
        for(int i=n-1;i>=0;i--){
             ListNode* newNode=new ListNode(v[i]);
            if(!head){
                head=newNode;
                current=newNode;
            }
            else{
                current->next=newNode;
                current=newNode;
            }
            
        }
        return head;
    }
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return NULL;
        }
        vector<int>num;
        ListNode* temp=head;
        while(temp){
            num.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* res=CreateNode(num);
        
        return res;
        
    }
};

