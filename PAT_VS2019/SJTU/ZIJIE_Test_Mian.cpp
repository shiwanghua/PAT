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
