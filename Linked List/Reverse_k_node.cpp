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

node* reverseknodes(node* &head, int k)
{
    /*node* prev = NULL;
    node* curr = head;
    node* nextptr;
    int count = 0;

    while(curr!=NULL && count<k)
    {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
        count++;
    }

    if(nextptr!=NULL)
    {
        head->next = reverseknodes(nextptr, k);
    }

    return prev;*/

    node* newhead = NULL;
    int count = 0;

    while(head!=NULL && count<k)
    {
        node* next = head->next;
        head->next = newhead;
        newhead = head;
        head = next;
        count++;
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

    int k = 2;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);

    display(head);

    node* newhead = reverseknodes(head, 2);
    display(newhead);
}