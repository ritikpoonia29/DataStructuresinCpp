#include<bits/stdc++.h>
using namespace std;

struct node
{
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

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> v;
        
        if(root == NULL)
        {
            return v;
        }
        
        map<int, int> m;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        
        while(!q.empty())
        {
            Node* it = q.front();
            
            q.pop();
            
            Node* node = it.first;
            
            int line = it.second;
            
            if(m.find(line) == m.end())
            {
                m[line] = node->data;
            }
            
            if(node->left != NULL)
            {
                q.push({node->left, line-1});
            }
            
            if(node->right != NULL)
            {
                q.push({node->right, line+1});
            }
        }
        
        for(auto it : m)
        {
            v.push_back(it.second);
        }
        
        return v;
        
    }

};

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->right = new node(3);
    root->right->right = new node(7);
    root->left->right = new node(5);
    root->right->left = new node(6);

   vector<int> vec = topView(root);

   for(int x: vec)
   {
    cout<<x<<" ";
   }
   cout<<endl;
}