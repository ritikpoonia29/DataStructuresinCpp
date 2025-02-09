#include<iostream>
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
    node* n = new node(val);
    if(head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insert(node* &head, int val)
{
    if(head == NULL)
    {
        insertathead(head, val);
        return;
    }

    node* temp = head;
    node* n = new node(val);

    while(temp->next!=head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}
void deleteathead(node* &head)
{
    node* temp = head;

    while(temp->next!=head)
    {
        temp = temp->next;
    }
    node* todelete = head;

    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deletenode(node* &head, int pos)
{
    node* temp = head;
    if(pos == 1)
    {
        deleteathead(head);
        return;
    }
    int count = 1;

    while(count!=pos-1)
    {
        temp = temp->next;
        count++;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    

    delete todelete;
}

void display(node* &head)
{
    node* temp = head;

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    node *head = NULL;

    cout<<"Enter the size of the linked list"<<endl;
    int n;
    cin>>n;

    int a[n];
    cout<<"Enter the linked list"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        insert(head, a[i]);
    }

    display(head);
    insertathead(head, 7);
    display(head);

    cout<<"Enter the node to be deleted\n";
    int x;
    cin>>x;

    deletenode(head, x);
    display(head);
    // deletenode(head, x);
    // display(head);
}