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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }
        // ListNode* dummyNode = new ListNode(0, head);
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        ListNode* prv = nullptr;

        while (fastPtr && fastPtr->next) {
            prv = slowPtr;
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        prv->next = slowPtr->next;

        return head;
    }
};