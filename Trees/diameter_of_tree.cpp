#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left = NULL;
    struct node* right = NULL;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left_ht;
    int right_ht;

    left_ht = height(root->left);
    right_ht = height(root->right);

    return 1+max(left_ht, right_ht);
}

int diameter(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left_ht;
    int right_ht;

    left_ht = height(root->left);
    right_ht = height(root->right);

    int curr_ht;
    curr_ht = left_ht + right_ht + 1;

    int left_dia;
    int right_dia;

    left_dia = diameter(root->left);
    right_dia = diameter(root->right);

    return max(curr_ht, max(left_dia, right_dia));
}
int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);
    root->right->left = new node(7);

    // cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;


}