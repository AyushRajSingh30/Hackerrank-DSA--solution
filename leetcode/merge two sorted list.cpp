 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          ListNode *w = list1;
    ListNode *w1 = list2;
ListNode *newHead = new ListNode(0);
    ListNode *p3 = newHead;
   

    while (w != nullptr && w1 != nullptr) {
      if (w->val <= w1->val) {
        p3->next = w;
        w = w->next;
      } else {
        p3->next = w1;
        w1 = w1->next;
      }
      p3 = p3->next;
    }
    if(w1!=nullptr){
        p3->next=w1;
    }
    else{
        p3->next=w;
    }
   
   return newHead->next;
    }
};
