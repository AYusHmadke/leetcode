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
        int sum=0;
        int carry =0;
        ListNode*ans=new ListNode();
        ListNode*temp=ans;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        while(temp1!=NULL||temp2!=NULL){
            sum=carry;
            if(temp1)sum=sum+temp1->val;
            if(temp2)sum=sum+temp2->val;
            carry=sum/10;
            ListNode*nw=new ListNode(sum%10);
            temp->next=nw;
            temp=temp->next;
           if(temp1)temp1=temp1->next;
           if(temp2)temp2=temp2->next;
        }
        if(carry){
            ListNode*nw=new ListNode(carry);
            temp->next=nw;
            temp=temp->next;
        }
        return ans->next;
    }
};