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

void insertatTail(node* &head, int val)
{
    node* n = new node(val);

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

void insertatHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void display(node* head)
{
    node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// bool search(node* head, int key)
// {
//     node* temp = head;

//     while(temp!=NULL)
//     {
//         if(temp->data == key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void deletenode(node* &head, int val)
// {
//     if(head == NULL)
//     {
//         return;         // If list is empty.
//     }

//     if(head->next == NULL)
//     {
//         delete deletenode(head);        // If there is only one element present in the list.
//         return;
//     }

//     node* temp = head;
//     while(temp->next->data != val)
//     {
//         temp = temp->next;
//     }

//     node* todelete = temp->next;
//     temp->next = temp->next->next;

//     delete todelete;
// }

// void deleteathead(node* &head)
// {
//     node *todelete = head;

//     head = head->next;
//     delete todelete;
// }
int main()
{
    node* head = NULL;

    int n;
    int val;
    
    cout<<"enter the size"<<endl;
    cin>>n;

    cout<<"enter the list"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>val;
        insertatTail(head, val);
    }

    display(head);

    
    
    // insertatTail(head, 1);
    // insertatTail(head, 2);
    // insertatTail(head, 3);

    // display(head);

    // insertatHead(head, 5);
    // insertatHead(head, 4);
    // display(head);

    // // cout<<search(head, 4)<<endl;
    // cout<<search(head, 7)<<endl;

    // deletenode(head, 2);
    // display(head);

    // deleteathead(head);
    // display(head);

}