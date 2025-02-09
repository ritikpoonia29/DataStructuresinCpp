#include<bits/stdc++.h>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if(top == n-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = x;
    }

    int get_Min()
    {
        if(top == -1)
        {
            return -1;
        }
        int minEle = INT_MAX;

        while(top!= -1)
        {
            minEle = min(minEle, arr[top]);
            top--;
        }

        return minEle;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is empty\n";
            return;
        }
        top--;
    }

    int Top()
    {
        if(top == -1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
  
    // s.pop();
    // s.pop(); 
    // s.pop();
    // s.pop();
    
    cout<<s.Top()<<endl;
    cout<<s.get_Min()<<endl;
  
    if(s.empty())
    {
        cout<<"Stack is Empty\n";
    }
    else
    cout<<"Stack is not empty\n";
}