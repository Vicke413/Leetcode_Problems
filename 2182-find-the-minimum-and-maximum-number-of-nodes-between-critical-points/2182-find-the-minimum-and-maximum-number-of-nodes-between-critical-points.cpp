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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

vector<int>ans={INT_MAX,INT_MAX};

        ListNode* cur=head;
        
int prevv=cur->val;
int id=-1;
        cur=cur->next;
        int pci=-1;
        int fci=-1;

        while(cur->next!=nullptr)
        {
            id++;
                int nextvalue=cur->next->val;
                int curval=cur->val;


                if((curval<nextvalue && curval<prevv) || (curval>nextvalue && curval>prevv))
                {

                    if(fci==-1)
                    {
                        fci=id;
                    }
                    else
                    {
                        ans[0]=min(ans[0],id-pci);
                        ans[1]=max(ans[0],id-fci);
                    }
                       pci=id;
                }
                prevv=curval;
                cur=cur->next;
             
        }

        if(ans[0]==INT_MAX)
        return {-1,-1};
        else
        return ans;
        
    }
};