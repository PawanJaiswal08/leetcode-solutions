// 328. Odd Even Linked List
#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode* next;

    public:
        ListNode(int data){
            this->data = data;
            this->next = NULL;
        }
};

ListNode* oddEvenList(ListNode* head) {
    
    if(head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

    ListNode* end = head;
    int count = 0;

    while(end->next != NULL) {
        end = end->next;
        count++;
    }

    int counter = (count & 1) ? (count/2 + 1) : (count/2);
    ListNode* temp = head;

    while(counter--) {
        
        end->next = temp->next;
        temp->next = temp->next->next;
        end->next->next = NULL;
        temp = temp->next;
        end = end->next;
    }
    
    return head;
}