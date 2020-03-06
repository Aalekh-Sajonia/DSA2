//int height(TreeNode *root)
//{
//    if(root == NULL)
//    {
//        return 0;
//    }
//
//    int lHeight = height(root->left);
//    int rHeight = height(root->right);
//
//    if(lHeight>rHeight)
//    {
//        return lHeight+1;
//    }
//    else
//    {
//        return rHeight+1;
//    }
//}
//
//void printNodes(TreeNode *node,int level)
//{
//    if(node == NULL)
//    {
//        return ;
//    }
//    if(level == 1)
//    {
//        cout<<node->val<<" ";
//        return ;
//    }
//    printNodes(node->left,level-1);
//    printNodes(node->right,level-1);
//
//}
//
//void BFS(TreeNode *root) {
//    if(root == NULL)
//    {
//        return ;
//    }
//    int h = height(root);
//
//    for(int i=1;i<=h;i++)
//    {
//        printNodes(root,i);
//    }
//    
//}

void BFS(TreeNode *root)
{
	queue<TreeNode *> s;
	
	if(root!=NULL)
	{
		s.push(root);
	}
	
	while(!s.empty())
	{
		TreeNode* temp = s.front();
		s.pop();
		cout<<temp->val<<" ";
		if(temp->left)
		{
			s.push(temp->left);
		}
		if(temp->right)
		{
			s.push(temp->right);
		}
	}	
	return ;
}
