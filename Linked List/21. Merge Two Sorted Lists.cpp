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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* temp = result;
        while(list1!=NULL && list2!=NULL ){
            if(list1->val <= list2->val){
                result->next = list1;
                list1= list1->next;
            }
            else{
              result->next = list2;
              list2 = list2->next;
            }
            result = result->next;
        }
        if(list1==NULL)
        {
            result->next=list2;
        }
        else if(list2 == NULL){
          result->next = list1;
        }
    
    return temp->next;
  }
};