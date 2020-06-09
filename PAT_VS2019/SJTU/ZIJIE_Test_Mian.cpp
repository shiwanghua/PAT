//#include <iostream>
//#include<queue>
//using namespace std;
//
//struct node {
//    node* left = NULL, * right = NULL;
//    int data;
//};
//
//queue<node*> lTree, rTree;
//// 检查是否是镜像树 （对称）
//bool is() {
//    node* t1, * t2;
//    while (!lTree.empty()) {
//        t1 = lTree.front();
//        t2 = rTree.front();
//        lTree.pop();
//        rTree.pop();
//        if (t1->data != t2->data) return false;
//        if (t1->left != NULL && t2->right != NULL)
//        {
//            rTree.push(t2->right);
//            lTree.push(t1->left);
//        }
//        else if (t1->left != NULL || t2->right != NULL) {
//            return false;
//        }
//        if (t1->right != NULL && t2->left != NULL) {
//            rTree.push(t2->left);
//            lTree.push(t1->right);
//        }
//        else if (t1->right != NULL || t2->left != NULL)
//            return false;
//    }
//    return true;
//}
//int main() {
//    node* root, * l, * r;
//    root = new node;
//    root->data = 1;
//
//    root->left = new node;
//    l = root->left;
//    l->data = 2;
//    l->left = new node;
//    l = l->left;
//    l->data = 3;
//
//    root->right = new node;
//    r = root->right;
//    r->data = 2;
//    r->right = new node;
//    r = r->right;
//    r->data = 3;
//
//    lTree.push(root->left);
//    rTree.push(root->right);
//    cout << is();
//    return 0;
//}




// 力扣101  2020-05-31
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//class Solution {
//public:
//    queue<TreeNode*> lTree, rTree;
//    bool is() {
//        TreeNode* t1, * t2;
//        while (!lTree.empty()) {
//            t1 = lTree.front();
//            t2 = rTree.front();
//            lTree.pop();
//            rTree.pop();
//            if (t1->val != t2->val) return false;
//            if (t1->left != NULL && t2->right != NULL)
//            {
//                rTree.push(t2->right);
//                lTree.push(t1->left);
//            }
//            else if (t1->left != NULL || t2->right != NULL) {
//                return false;
//            }
//            if (t1->right != NULL && t2->left != NULL) {
//                rTree.push(t2->left);
//                lTree.push(t1->right);
//            }
//            else if (t1->right != NULL || t2->left != NULL)
//                return false;
//        }
//        return true;
//    }
//    // bool isSymmetric(TreeNode* root) {
//    //     if(!root) return 1;
//    //     if(root->left&&root->right)
//    //     {   lTree.push(root->left);
//    //         rTree.push(root->right);}
//    //     else if(root->left||root->right)
//    //         return 0;
//    //     return is();
//    // }
//
//
//    //     bool check(TreeNode *p, TreeNode *q) {
//    //     if (!p && !q) return true;
//    //     if (!p || !q) return false;
//    //     return p->val == q->val && check(p->left, q->right) && check(p->right, q->left);
//    // }
//
//    // bool isSymmetric(TreeNode* root) {
//    //     return check(root, root);
//    // }
//
//    bool check(TreeNode* u, TreeNode* v) {
//        queue <TreeNode*> q;
//        q.push(u); q.push(v);
//        while (!q.empty()) {
//            u = q.front(); q.pop();
//            v = q.front(); q.pop();
//            if (!u && !v) continue;
//            if ((!u || !v) || (u->val != v->val)) return false;
//
//            q.push(u->left);
//            q.push(v->right);
//
//            q.push(u->right);
//            q.push(v->left);
//        }
//        return true;
//    }
//
//    bool isSymmetric(TreeNode* root) {
//        return check(root, root);
//    }
//
//};
