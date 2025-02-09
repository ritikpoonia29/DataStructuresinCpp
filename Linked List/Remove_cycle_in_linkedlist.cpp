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

void makecycle(node* &head, int pos)
{
    node* temp = head;
    node* startnode;
    int count = 1;

    while(temp->next!=NULL)
    {
        if(count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectcycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}

void removecycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;

    while(fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
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

    int pos = 3;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    insertion(head, 5);
    insertion(head, 6);
    insertion(head, 7);

    display(head);

    makecycle(head, pos);
    // display(head);

    cout<<detectcycle(head)<<endl;

    removecycle(head);

    cout<<detectcycle(head)<<endl;
}