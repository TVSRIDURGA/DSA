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
 //Brute force
/*class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode*temp = head;
         int count =0 ;
         while(temp!=NULL){
            count++;
            temp=temp->next;
         }
         int middleCount = (count/2 +1 );
         temp = head;
         while(temp!= NULL){
            middleCount= middleCount-1;
            if(middleCount == 0) 
                break;
                temp= temp->next;
         }
         return temp;
        

        
    }
};
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head){
        ListNode* slow= head;
        ListNode* fast= head ;
        while(fast != NULL && fast->next != NULL ){
            slow= slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
};