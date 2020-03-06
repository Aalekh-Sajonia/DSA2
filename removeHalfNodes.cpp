Node* removeHalfNodes(Node* root)
{
	if(root == NULL)
	{
		return NULL;	
	}   
	
	root->left = removeHalfNodes(root->left);
	root->right = removeHalfNodes(root->right);
	
	if(root->left == NULL && root->right == NULL)
	{
		return root;
	}
	
	if(root->left == NULL)
	{
		Node *newNode = root->right;
		delete root;
		return newNode;	
	}
	
	if(root->right == NULL)
	{
		Node *newNode = root->left;
		delete root;
		return newNode;
	}
}
