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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* dummy=new ListNode(0);


        ListNode* cur=head;

        ListNode* newcur=dummy;

        while(1)
        {
            int sum=0;

            while(cur->next!=NULL && cur->next->val!=0)
            {
                cur=cur->next;
                sum+=cur->val;
            }
 
            newcur->next=new ListNode(sum);
            newcur=newcur->next;
                cur=cur->next;
                if(cur->next==nullptr)
                break;
        }
        ListNode* newno=dummy->next;
        delete(dummy);

return newno;
        
    }
};