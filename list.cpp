#include <iostream>
#include<stack>
using namespace std;

string InfixToPostfix(stack <char> s,string infix){
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
        while((s.top()!='(') && (!s.empty()))
        {
            char temp=s.top();
            postfix+=temp;
            s.pop();
        }
    }
    
    }
}