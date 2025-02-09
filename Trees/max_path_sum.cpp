#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* left = NULL;
    struct node* right = NULL;
    int data;

    node(int val)
    {
        data = val;
    }
};

int maxpathsumutil(node* root, int &ans)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = maxpathsumutil(root, ans);
    int right = maxpathsum(root, ans);

    int nodemax = max(max(root->data, root->data + left + right),
                      max(root->data + left, root->data + right));

    ans = max(ans, nodemax);

    int singlepathsum = max(root->data, max(root->data + left, root->data + right));
    return singlepathsum;
}

int maxpathsum(node* root)
{
    int ans = INT_MIN;
    maxpathsumutil(root, ans);
    return ans;
}

int main()
{
    node* root = new node(1);
 root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);
 root->right->left = new node(6);
 root->right->right = new node(7);
 root->right->left->left = new node(8);
}
