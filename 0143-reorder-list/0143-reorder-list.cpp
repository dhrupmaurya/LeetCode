class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (slow != nullptr) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        ListNode* head1 = head;
        ListNode* head2 = prev; 
        while (head2->next) {
            next = head1->next;
            prev = head2->next;

            head1->next = head2;
            head2->next = next;
            
            head1 = next;
            head2 = prev;
        }
    }
};