#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;


    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

bool isIdentical(node *root1, node *root2)
{

    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }

    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }

    else
    {
        bool c1 = root1->data == root2->data;
        bool c2 = isIdentical(root1->left, root2->left);
        bool c3 = isIdentical(root1->right, root2->right);

        if(c1 && c2 && c3)
        {
            return true;
        }
        return false;
    }

}
int main()
{
    /* 2
      / \
     3   4
    */

    node* root1 = new node(2);
    root1->left = new node(3);
    root1->right = new node(4);

    /* 2
      / \
     3   3
    */

   node* root2 = new node(2);
    root2->left = new node(3);
    // root2->right = new node(4);
    root2->right = new node(3);

    if(isIdentical(root1, root2))
    {
        cout<<"BSTs are identical\n";
    }
    else
    {
        cout<<"BSTs are not identical\n";
    }

}