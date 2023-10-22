#include <iostream>
using namespace std;


class Node {
    
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Stack {

    public:
    static Node* head;
    
    public:
    static bool isEmpty() {
        return head == NULL;
    }

public:
    void push(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }


public:
    static int pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        int top = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return top; // Added return statement
    }


public:
    static int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
      
        return head->data;
    }


public:
    static void print() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


// Initialize static member
Node* Stack::head = NULL;



int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.print();
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    s.print();
    return 0;
}