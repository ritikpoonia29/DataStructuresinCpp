#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node*prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertathead(node* &head, int val)
{
    node* n  = new node(val);

    n->next = head;

    if(head!=NULL)
    {
        head->prev = NULL;
    }

    head = n;
}

void insert(node* &head, int val)
{
    if(head == NULL)
    {
        insertathead(head , val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}


void display(node* &head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

node* merge(node* &head1, node* &head2)
{
    node* temp1 = head1;
    node* temp2 = head2;

    node* dummy = new node(-1);
    node* flag = dummy;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            flag->next = temp1;
            temp1 = temp1->next;
        }
        else{
            flag->next = temp2;
            temp2= temp2->next;
        }
        flag = flag->next;
    }

    while(temp1!=NULL)
    {
        flag->next = temp1;
        temp1 = temp1->next;
        flag = flag->next;
    }
    while(temp2!=NULL)
    {
        flag->next = temp2;
        temp2 = temp2->next;
        flag = flag->next;
    }

    return dummy->next;
}

node* recursive_merge(node* head1, node* &head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    
    if(head2 == NULL)
    {
        return head1;
    }
    node* result;

    if(head1->data<head2->data)
    {
        result = head1;
        result->next = recursive_merge(head1->next, head2);
    }
    else{
        result = head2;
        result->next = recursive_merge(head1, head2->next);
    }

    return result;
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;

    cout<<"Enter the size of linked list\n";
    int n;
    cin>>n;
    cout<<"Enter the size of the other linked list\n";
    int m;
    cin>>m;
    int b[m];
    
    cout<<"Enter the linked list 1\n";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the linked list 2\n";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        insert(head1, a[i]);
    }
    for(int i=0;i<m;i++)
    {
        insert(head2, b[i]);
    }

    
    display(head1);
    node* newhead = recursive_merge(head1, head2);
    display(newhead);
}