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

void insert(node* &head, int val)
{
    if(head == NULL)
    {
        insertathead(head, val);
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

int length(node* &head)
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

void intersect(node* &head1, node* &head2, int pos)
{
    node *temp1 = head1;
    pos--;

    while(pos--)
    {
        temp1= temp1->next;
    }

    node* temp2 = head2;
    while(temp2->next!=NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}
int intersection(node* &head1, node* &head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    node* ptr1;
    node* ptr2;

    int d = 0;

    if(l1>l2)
    {
        d = l1-l2;

        ptr1 = head1;
        ptr2 = head2;

    }
    else{
        d = l2-l1;
        ptr1 = head1;
        ptr2 = head2;
    }

    while(d)
    {
        ptr1 = ptr1->next;
        if(ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!= NULL)
    {

        if(ptr1 == ptr2)
        {
            return ptr1->data;
        }
         ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
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

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;

    int n;
    int m;

    cin>>n>>m;
    int a[n], b[m];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(n-m);i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        insert(head1, a[i]);
    }

    for(int i=0;i<(n-m);i++)
    {
        insert(head2, b[i]);
    }

    intersect(head1, head2, 3);
    display(head1);
    display(head2);
    
}