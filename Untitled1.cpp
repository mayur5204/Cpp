#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};

class Stack{
    public:
    static Node*head;

    public:
    static bool isEmpty(){return head==NULL;}

    public:
    void push(int data){
        Node* newNode= new Node(data);
        if (isEmpty()){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    public:
    int pop(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        int top=head->data;
        Node* temp=head;
        head=head->next;
        delete temp;
        return top;
    }

    public:
    int peek(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return head->data;
    }

    public:
    int viewData(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        Node*temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

Node* Stack::head=NULL;

int main(){
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.viewData();
    cout<<s.pop()<<endl;
    s.viewData();
    cout<<s.peek()<<endl;

}
