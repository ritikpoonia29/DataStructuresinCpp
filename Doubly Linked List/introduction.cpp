#include<iostream>
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
    head->prev = n;
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

void deleteathead(node* &head)
{
    node *temp = head;

    head = head->next;
    head->prev = NULL;

    delete temp;
}
void deletenode(node* &head, int pos)
{
    if(pos == 1)
    {
        deleteathead(head);
        return;
    }
    node* temp = head;
    int count = 1;

    while(temp->next!=NULL && count!=pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL)
    {
    temp->next->prev = temp->prev;
    }

    delete temp;
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

    insertattail(head, 5);
    insertattail(head, 4);
    insertattail(head, 3);
    insertattail(head, 2);

    display(head);

    insertathead(head, 1);
    display(head);

    deleteathead(head);
    display(head);

    deletenode(head, 3);
    display(head);

}