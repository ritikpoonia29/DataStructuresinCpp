#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }

    cout<<node->data<<" ";

    preorder(node->left);
    preorder(node->right);

}
void inorder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);

}
void postorder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
void levelorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* node = q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    struct node *root = new node(p);
    root->left = new node(q);
    root->right = new node(v);
    root->left->left = new node(4);
    root->left->right = new node(w);
    root->left->right->left = new node(x);
    root->right->right = new node(y);
    root->right->right->left = new node(z);
    cout<<"Preorder:\n";
    preorder(root);
    cout<<"\n";
    cout<<"Inorder:\n";
    inorder(root);
    cout<<"\n";
    cout<<"Postorder: \n";
    postorder(root);
    cout<<"\n";
    cout<<"Level Order:\n";
    levelorder(root);
    cout<<"\n";
}