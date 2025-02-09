#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void zigzag(node* root)
{
    if(root == NULL)
    {
        return;
    }

    bool leftToright = true;

    stack<node*> currlevel;
    stack<node*> nextlevel;

    currlevel.push(root);
    while(!currlevel.empty())
    {
        node* temp;
        temp = currlevel.top();
        currlevel.pop();

        if(temp)
        {
            cout<<temp->data<<" ";
      

        if(leftToright)
        {
            if(temp->left)
            {
                nextlevel.push(temp->left);
            }
            if(temp->right)
            {
                nextlevel.push(temp->right);
            }
        }

        else{
            if(temp->right)
            {
                nextlevel.push(temp->right);
            }

            if(temp->left)
            {
                nextlevel.push(temp->left);
            }
            }
        }

        if(currlevel.empty())
        {
            leftToright = !leftToright;
            swap(currlevel, nextlevel);
        }
    }
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->left->right = new node(6);
    root->right->right = new node(7);

    zigzag(root);
    cout<<endl;
}