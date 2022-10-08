#include <cstdint>
#include <cstdlib>
#include <iostream>
using namespace std;

// Stack Has the Following Operations
// Push - And the given element to the Stack
// Pop - Remove the Last Added Element
// isEmpty - Check whether Stack is Empty
// isFull - Check whether Stack is Full

// To implement all these operations using Linked List Follow this logic.
// Have the two variables max and count
//      max - Max Size of the Stack
//      count - Size of the Stack at given moment
// Implement a constructure which takes max as input and initialize count as 0
//
// isEmpty - if count is 0 then the Stack is empty
//
// isFull - if count is equal to max then the Stack is full
//
// Push - push the given element at the begining of the Linked List and
//
// increament count
//
// Pop - Remove the first element by changing the head pointer to head->next and
// decrementing count.

class Node {
  public:
    int data;
    Node *next;

    Node() {
        this->data = 0;
        this->next = nullptr;
    }

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

class Stack {
  private:
    Node *head;
    int max;
    int count;

  public:
    Stack(int max) {
        this->head = nullptr;
        this->max = max;
        this->count = 0;
    }

    bool isEmpty() {
        if (this->count == 0) {
            return true;
        }
        return false;
    }

    bool isFull() {
        if (this->count == this->max) {
            return true;
        }
        return false;
    }

    int top() {
        if (this->isEmpty()) {
            return INT32_MIN;
        }
        return this->head->data;
    }

    void push(int val) {
        if (this->isFull()) {
            cout << "The Stack is Already Full" << endl;
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    int pop() {
        if (this->isEmpty()) {
            return INT32_MIN;
        }
        int ret = this->head->data;
        Node *temp = this->head;
        this->head = this->head->next;
        free(temp);
        this->count--;
        return ret;
    }

    void traverse() {
        Node *temp = this->head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(int argc, char *argv[]) {
    Stack st = Stack(10);

    // Is the Stack Empty
    if (st.isEmpty()) {
        cout << "The Stack is Empty" << endl;
    } else {
        cout << "The Stack is Not Empty" << endl;
    }

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    st.push(11);
    st.push(12);

    st.traverse();

    // Is the Stack Empty
    if (st.isEmpty()) {
        cout << "The Stack is Empty" << endl;
    } else {
        cout << "The Stack is Not Empty" << endl;
    }

    cout << st.pop() << endl;

    st.traverse();

    cout << st.top() << endl;

    st.traverse();

    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;

    // Is the Stack Empty
    if (st.isEmpty()) {
        cout << "The Stack is Empty" << endl;
    } else {
        cout << "The Stack is Not Empty" << endl;
    }

    return 0;
}
