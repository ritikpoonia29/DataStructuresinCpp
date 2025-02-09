#include<bits/stdc++.h>
using namespace std;
    
    struct node{
        int data;
        struct node*left;
        struct node* right;

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

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh, rh) + 1;
    }

    bool balancedtree(struct node* root)
    {
        if(root == NULL)
        {
            return true;
        }

        if(balancedtree(root->left) == false)
        {
            return false;
        }

        if(balancedtree(root->right) == false)
        {
            return false;
        }

        int lh;
        int rh;

        lh = height(root->left);  
        rh = height(root->right);

        if(abs(lh-rh)<=1)
        {
            return true;
        }  
        else
        {
            return false;
        }
    }
int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);

    struct node* root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);
    root2->left->left->left = new node(4);

    if(balancedtree(root2))
    {
        cout<<"Tree is balanced\n";
    }
    else
    {
        cout<<"Tree is unbalanced\n";
    }
}