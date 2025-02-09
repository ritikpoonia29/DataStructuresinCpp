#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertathead(node* &head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertattail(node* &head, int val)
{
    node *n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void deleteathead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletebyvalue(node* &head, int val)
{
    if(head == NULL)
    {
        return;
    }
    
    if(head->next == NULL)
    {
        delete head;
        return;
    }
    node* temp = head;
    while(temp->next->data != val)
    {
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(node* head)
{
    node* temp = head;
    if(temp == NULL)
    {
        return;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool searchval(node* head, int key)
{
    if(head == NULL)
    {
        return false;
    }

    node* temp = head;

    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        // insertathead(head, x);
        insertattail(head,x);
    }
    // deleteathead(head);
    deletebyvalue(head, 3);
    display(head);
    // if(searchval(head, 6))
    // {
    //     cout<<"Present\n";
    // }
    // else{
    //     cout<<"Absent\n";
    // }
}