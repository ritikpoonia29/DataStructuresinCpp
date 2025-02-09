#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int length(node* head)
{
    node* temp = head;

    int l = 0;

    while(temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void insertathead(node* &head, int val)
{
    node* n = new node(val);

    n->next = head;
    if(head!=NULL)
    {
    head->prev = NULL;
    }

    head = n;
}


void insertattail(node* &head, int val)
{

    if(head == NULL)
    {
        insertathead(head, val);
        return;
    }
    node* n = new node(val);

    node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}


node* appendknodes(node* &head, int k)
{
    node* newhead;
    node* newtail;
    node* tail = head;

    int len = length(head);
    int count = 1;

    k = k%len;
    while(tail->next!=NULL)
    {
        if(count == len-k)
        {
            newtail = tail;
            newhead = tail->next;
        }

        // if(count == len - k + 1)
        // {
        //     newhead = tail;
        // }
        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

void display(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main()
{
    node* head = NULL;

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    // int a[] = {1,2,3,4,5,6};

    for(int i=0;i<n;i++)
    {
        insertattail(head, a[i]);
    }

    display(head);
    node* newhead = appendknodes(head,3);

    display(newhead);


}