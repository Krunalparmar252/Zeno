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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // dummy node
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        return dummyHead->next;
    }


    ListNode* createList(int arr[], int size) {
        if (size == 0) return nullptr;

        ListNode* head = new ListNode(arr[0]);
        ListNode* current = head;

        for (int i = 1; i < size; i++) {
            current->next = new ListNode(arr[i]);
            current = current->next;
        }

    return head;
    }


    void printList(ListNode* head) {
        while (head != nullptr) {
            cout << head->val;
            if (head->next != nullptr)
                cout << " -> ";
            head = head->next;
        }
        cout << endl;
    }
    
};