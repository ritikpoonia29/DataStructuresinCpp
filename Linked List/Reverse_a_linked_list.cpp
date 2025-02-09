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

void insertion(node* &head, int val)
{
    node* n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }
    node*temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node* reverse(node* &head)
{
    /*node* prev = NULL;
    node* curr = head;
    node* nextptr;

    while(curr!=NULL)
    {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }

    return prev;*/

    node *newhead = NULL;

    while(head!=NULL)
    {
        node* next = head->next;
        head->next = newhead;
        newhead = head;
        head = next;
    }
    return newhead;
}

void display(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}

int main()
{
    node* head = NULL;

    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);

    display(head);

    node* newhead = reverse(head);
    display(newhead);
}