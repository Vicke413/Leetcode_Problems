/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


string seralize(TreeNode* root, vector<TreeNode*> &dup, unordered_map<string,int>&subtree)
{
    if(root==NULL)
    return "#";
    string left=seralize(root->left,dup,subtree);
    string right=seralize(root->right,dup,subtree);

    string ac=left+","+right+","+to_string(root->val);
    if(subtree[ac]==1)
    dup.push_back(root);
    subtree[ac]++;

    return ac;
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {

        vector<TreeNode*>dup;
unordered_map<string,int>subtree;
        seralize(root,dup,subtree);

        return dup;        
    }
};