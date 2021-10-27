bool isidentical(TreeNode* tree_1, TreeNode* tree_2)
{
  //never forget to write the base case in this situation
  if(tree_1==nullptr && tree_2==nullptr)
  {
    return true;
  }
  
  if(tree_1 && tree2)
  {
    if(tree_1->val==tree->val)
    {
      return isidentical(tree_1->left) && isidentical(tree->right);
    }
  }
