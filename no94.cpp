#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 94给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        //调用一个递归程序
//        vector<int> inorder;
//        getval(root, inorder);
//        return inorder;
//    }
//    void getval(TreeNode* node, vector<int>& inorder)
//    {
//        if (node == NULL)
//        {
//            return;
//        }
//        else
//        {
//           
//           
//           getval(node->left, inorder);
//           inorder.push_back(node->val);
//           getval(node->right, inorder);
//        }
//    }
//
//};

// 100 给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
// 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if (p == NULL && q == NULL)
//        {
//            return true;
//        }
//        if (p == NULL || q == NULL)
//            return false;
//        if (p->val != q->val)
//            return false;
//        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//        
//    }
//};

//101 给你一个二叉树的根节点 root ， 检查它是否轴对称。
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        if (root == NULL)
//            return true;
//        return isMirror(root->left,root->right);
//            
//    }
//private:
//    // 辅助函数：检查两棵树是否互为镜像
//    bool isMirror(TreeNode* t1, TreeNode* t2) {
//        // 两个节点都为空，对称
//        if (t1 == nullptr && t2 == nullptr) {
//            return true;
//        }
//        // 一个为空一个不为空，不对称
//        if (t1 == nullptr || t2 == nullptr) {
//            return false;
//        }
//        // 当前节点值相等，且t1的左子树与t2的右子树对称，t1的右子树与t2的左子树对称
//        return (t1->val == t2->val)
//            && isMirror(t1->left, t2->right)
//            && isMirror(t1->right, t2->left);
//    }
//};


// 104 二叉树的最大深度  
// 
//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        // 遍历到每一个叶子节点
//		// 递归的终止条件
//		if (root == NULL)
//			return 0;
//		int left = maxDepth(root->left);
//		int right = maxDepth(root->right);
//		return max(left, right) + 1;
//
//    }
//};

// 108 将有序数组转换为二叉搜索树
// 时间复杂度O(N)，空间复杂度O(logN)递归的栈空间深度
//class Solution {
//public:
//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//		// 调用一个递归程序
//		return buildBST(nums, 0, nums.size() - 1);
//	}
//	TreeNode* buildBST(vector<int>& nums, int left, int right)
//	{
//		if (left > right)
//			return NULL;
//		int mid = left + (right - left) / 2;
//		TreeNode* node = new TreeNode(nums[mid]);
//		node->left = buildBST(nums, left, mid - 1);
//		node->right = buildBST(nums, mid + 1, right);
//		return node;
//	}
//
//};

//110 平衡二叉树
// 不是节点的值大小，而是节点的高度差
// 时间复杂度O(N)，空间复杂度O(logN)递归的栈空间深度
//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//         //二叉平衡树
//		if (root == NULL)
//			return true;
//		if (abs(getDepth(root->left) - getDepth(root->right)) > 1)
//			return false;
//		return isBalanced(root->left) && isBalanced(root->right);
//    }
//	int getDepth(TreeNode* node)
//	{
//		if (node == NULL)
//			return 0;
//		return max(getDepth(node->left), getDepth(node->right)) + 1;
//	}
//};

//111 二叉树的最小深度
// 和最大深度不同，不能直接算min，一边有空的话得得到另一边的深度，不然就一直是0
//class Solution {
//public:
//    int minDepth(TreeNode* root) {
//		if (root == NULL)
//			return 0;
//		if (root->left == NULL && root->right == NULL)
//			return 1;
//		if (root->left == NULL)
//			return minDepth(root->right) + 1;
//		if (root->right == NULL)
//			return minDepth(root->left) + 1;
//		return min(minDepth(root->left), minDepth(root->right)) + 1;
//    }
//};

// 112 路径总和
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

    }
};
int main()
{

    Solution so;
    TreeNode* root1 = new TreeNode(1, NULL, new TreeNode(2,NULL, new TreeNode(2, NULL, new TreeNode(2, NULL, new TreeNode(2, NULL, NULL)))));
    TreeNode *root2 = new TreeNode(1,NULL, new TreeNode(2, new TreeNode(3),NULL));
    // 
    cout<<so.hasPathSum(root1,2);

   /* for (int i = 0;i < re.size();i++)
    {
        cout << re[i] << endl;
    }*/
    return 0;
}