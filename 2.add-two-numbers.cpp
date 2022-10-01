// 2. Add Two Numbers
#include<bits/stdc++.h>
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

void insertAtTail(ListNode* &tail, int data){
    ListNode* temp = new ListNode(data);
    tail->next = temp;
    tail = tail->next;
}

void print(ListNode* &head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    // int sum = 0;
    int carry = 0;

    while(head1 != NULL && head2 != NULL){
        
        int sum = head1->data + head2->data + carry;

        if(sum >= 10){
            carry = 1;
            sum = sum - 10;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head1 = head1->next;
            head2 = head2->next;
        }else{
            carry = 0;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    while(head1 != NULL){
        int sum = head1->data + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum - 10;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head1 = head1->next;
        }else{
            carry = 0;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head1 = head1->next;
        }
    }

    while(head2 != NULL){
        int sum = head2->data + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum - 10;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head2 = head2->next;
        }else{
            carry = 0;
            ListNode* nextNode = new ListNode(sum);
            temp->next = nextNode;
            temp = temp->next;
            head2 = head2->next;
        }
    }

    if(carry != 0){
        ListNode* nextNode = new ListNode(carry);
        temp->next = nextNode;
        temp = temp->next;
    }

    // delete dummy 
    ListNode* prev = dummy;
    dummy = dummy->next;
    prev->next = NULL;
    delete prev;

    return dummy;
}

int main(){
    ListNode* node1 = new ListNode(7);
    
    ListNode* head1 = node1;
    ListNode* tail1 = node1;

    insertAtTail(tail1, 5);
    insertAtTail(tail1, 9);
    insertAtTail(tail1, 4);
    insertAtTail(tail1, 6);

    print(head1);

    ListNode* node2 = new ListNode(8);

    ListNode* head2 = node2;
    ListNode* tail2 = node2;

    insertAtTail(tail2, 4);

    print(head2);

    head1 = addTwoNumbers(head1, head2);

    print(head1);


    return 0;
}