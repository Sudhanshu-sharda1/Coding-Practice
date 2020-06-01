TreeNode* invertTree(TreeNode* root) {
         if(root == NULL)
            return NULL;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            TreeNode *Temp = node->left;
            node->left = node->right;
            node->right = Temp;
            
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
        }
        return root;
    }
