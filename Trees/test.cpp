void left_traversal(Node* root, vector<int>& a)
   {
      if(root == NULL)
          return;
      if(root->left == NULL && root->right == NULL)
          return;
      
      a.push_back(root->data);
      if(root->left)
          left_traversal(root->left, a);
      else
          left_traversal(root->right, a);
      
   }
   
   void leaf_traversal(Node* root, vector<int>& a)
   {
       if(root == NULL)
           return;
       if(root->left == NULL && root->right == NULL)
       {
           a.push_back(root->data);
           return;
       }
       leaf_traversal(root->left, a);
       leaf_traversal(root->right, a);
   }
   
   void right_traversal(Node* root, vector<int>& a)
   {
       if(root == NULL)
           return;
       if(root->left == NULL && root->right == NULL)
           return;
           
       if(root->right)
           right_traversal(root->right, a); 
       else
           right_traversal(root->left, a);
           
           
       a.push_back(root->data);
   }
   
    vector <int> boundary(Node *root)
    {
        vector<int>a;
       if(root == NULL)
       {
           return a;
       }
       a.push_back(root->data);
       
       left_traversal(root->left, a);
       
       leaf_traversal(root->left, a);
       leaf_traversal(root->right, a);
       
       right_traversal(root->right, a);
       
       return a;
    }