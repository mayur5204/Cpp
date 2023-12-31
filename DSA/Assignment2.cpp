#include <iostream>
#include <algorithm>

using namespace std;

//................................................................STACK USING LINKED LIST

//.............................................................................NODE CLASS
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

//.............................................................................STACK CLASS
class Stack
{
    public:
    static Node*head;

    public:
    static bool isEmpty()
    {
        return head==NULL;
    }




//.............................................................................PUSH METHOD
    public:
    void push(int data)
    {
        Node* newNode= new Node(data);
        if (isEmpty())
        {
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }


//.............................................................................POP METHOD
    public:
    int pop()
    {
        if (isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        int top=head->data;
        Node* temp=head;
        head=head->next;
        delete temp;
        return top;
    }

//.............................................................................TOP METHOD

    public:
    int top()
    {
        if (isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return head->data;
    }



//.............................................................................VIEWDATA METHOD
    public:
    int viewData()
    {
        if (isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

//.............................................................................STACK INITIALISED
Node* Stack::head=NULL;


//..............................................................................INFIX TO POSTFIX



//.............................................................................ISOPERATOR MET
bool isOperator(char c)
{
    if (c=='+'||c=='-'||c=='*'||c=='/')
    {
        return true;
    }
    else 
    {
        return false;
    }
}


//.............................................................................PRECEDENCE METHOD
int precedence(char c)
{
    if (c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
    
//.............................................................................INFIX TO POSTFIX MEHOD
string InfixToPostfix(Stack s,string infix)
{

    string postfix;

    for(int i=0;i<infix.length();i++)
    {
        
        if ((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
        {
        postfix+=infix[i];
    }
    
    else if (infix[i]=='(')
    {
        s.push(infix[i]);
    }
    
    else if(infix[i]==')')
    {
        while((s.top()!='(') && (!s.isEmpty()))
        {
            char temp=s.top();
            postfix+=temp;
            s.pop(); 
        }
        if(s.top()=='(')
        {
            s.pop();
        }
    }
    else if(isOperator(infix[i]))
    {
        if (s.isEmpty())
        {
            s.push(infix[i]);
        }
        else 
        {
            if (precedence(infix[i])>precedence(s.top()))
            {
                s.push(infix[i]);
            }
            else if(precedence(infix[i])==precedence(s.top())&&(infix[i]=='^'))
            {
                s.push(infix[i]);
            }
            else 
            {
                while((!s.isEmpty())&&(precedence(infix[i])<=precedence(s.top())))
                {
                    char temp = s.top();
                    postfix+=temp;
                s.pop();
                }
                s.push(infix[i]);
            }
        }
    }
}
while(!s.isEmpty())
{
  postfix+=s.top();
  s.pop();
}
return postfix;
}




//.............................................................................INFIX TO PREFIX METHOD
string infixtoprefix(Stack s,string infix)
{
    string prefix;
    reverse(infix.begin(),infix.end());
    for (int i=0;i<infix.length();i++)
    {
        if(infix[i]=='(')
        {
            infix[i]=')';
        }
        else if(infix[i]==')')
        {
            infix[i]='(';
        }
    }
         for (int i=0;i<infix.length();i++)
         {
            if (infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z')
            {
                prefix+=infix[i];
            }
            
                else if (s.isEmpty()){
                    s.push(infix[i]);
                }
                else if (infix[i]=='(')
                {
                    s.push(infix[i]);
                }
                else if (infix[i]==')')
                {
                    while((!s.isEmpty() )&&  (s.top()!='('))
                    {
                    char temp=s.top();
                    prefix+=s.top();
                    s.pop();
                    }
                    if(s.top()=='(')
                    {
                        s.pop();
                    }
                }
                else if(isOperator(infix[i]))
                {
                    if (precedence(infix[i])>precedence(s.top()))
                    {
                    s.push(infix[i]);
                    }
                    else if (precedence(infix[i])==precedence(s.top())&&infix[i]=='^')
                    {
                    s.push(infix[i]);
                    }
                    else 
                    {
                    while(!s.isEmpty()&& precedence(infix[i])<=precedence(s.top()))
                    {
                        char temp=s.top();
                        prefix+=temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                    
                }
            }
        }
    
    while(!s.isEmpty())
    {
        prefix+=s.top();
        s.pop();
    }
    reverse(prefix.begin(),prefix.end());
    return prefix;
}


//.............................................................................MAIN METHOD
int main()
{
    Stack s;
    string infix;
    cout<<"Enter the infix expression  :";
    cin>>infix;
    cout<<"Postfix expression :";
    cout<<InfixToPostfix(s,infix)<<endl;
    cout<<"Prefix expression is :";
    cout<<infixtoprefix(s,infix);
}