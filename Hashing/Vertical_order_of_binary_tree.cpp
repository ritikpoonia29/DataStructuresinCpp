/*
Concept: Here we have to print the vertical order of a binary tree.
Approach: Crerate a variable hdis to store the horizontal distance of the node from the root node.
          Create a map and store the horizontal distance and the vector of the nodes.
          Recursively iterate in the left subtree and at every iteration decrease the horizontal distance by 1.
          Recursively iterate in the right subtree and at every iteration increase the horizontal distance by 1.
Dry Run:    10
            / \
           7   4
          / \  / \
         3 11 14  6
    Hdis at nodes(10, 11, 14) = 0
    Hdis at node(7) = -1
    Hdis at node(3) = -2
    Hdis at node(4) = 1
    Hdis at node(6) = 2

Map : <-2 3
       -1 7
        0 {10,11,14}
        1 4
        2 6>
*/

#include<bits/stdc++.H>
using namespace std;

struct Node{
    Node *left, *right;
    int data;
};

struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void getvertical(Node* root, int hdis, map<int, vector<int>> &mp)
{
    if(root == NULL)
    {
        return;
    }

    mp[hdis].push_back(root->data);
    getvertical(root->left, hdis-1, mp);
    getvertical(root->right, hdis+1, mp);
}

int main()
{
    Node* root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);
    
    
    int hordist = 0;
    map<int, vector<int>> mp;
    getvertical(root, hordist, mp);

    map<int, vector<int>> :: iterator i;
    for(i = mp.begin(); i!=mp.end();i++)
    {
        for(int j = 0;j<i->second.size();j++)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
    
}