#include "solution.h"

struct solution_563::TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right){}
};

void solution_563::createTreeNode(TreeNode* root, stack<int> temp)
{
	if (temp.top() == NULL)
	{
		temp.pop();
		return;
	}
		
	else
	{
		root = new TreeNode;
		root->val = temp.top();
		temp.pop();
		createTreeNode(root->left, temp);
		createTreeNode(root->right, temp);
	}
}

int solution_563::findTilt(TreeNode* root)
{
	dfs(root);
	return ans;
}

int solution_563::dfs(TreeNode* node)
{
	if (node == NULL)return 0;
	int sumLeft = dfs(node->left);
	int sumRight = dfs(node->right);
	ans += abs(sumLeft - sumRight);
	return sumLeft + sumRight + node->val;
}