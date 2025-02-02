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
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        int carry=0,num1,num2,sum,val;
        while(l1!=NULL || l2!=NULL || carry!=0){
            num1 = (l1!=NULL) ? l1->val : 0;
            num2 = (l2!=NULL) ? l2->val : 0;
            sum = num1 + num2 + carry;
            val = sum % 10;
            carry = sum / 10; 
            ListNode* newTemp = new ListNode(val);
            temp->next = newTemp;
            temp = temp->next;

            l1 = (l1!=NULL) ? l1->next : NULL;
            l2 = (l2!=NULL) ? l2->next : NULL;
        }
        return res->next;
    }
};
