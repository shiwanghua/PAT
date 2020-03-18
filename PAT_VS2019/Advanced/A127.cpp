//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//int n;
//vector<int> in, post,layer,layerNum; map<int, int> m;
//struct node {
//	int d;
//	node* l=NULL, * r=NULL;
//};
//node* tranT(int l, int r, int rootIndexPost, node* root) {
//	if (l > r) return root;
//	if (root == NULL) root = new node;  //  Bug2: 少了这一句
//	root->d = post[rootIndexPost];
//	int inPos = m[post[rootIndexPost]];
//	root->l = tranT(l,inPos-1 , rootIndexPost-1-r+inPos ,root->l);
//	root->r = tranT(inPos + 1, r, rootIndexPost - 1, root->r);
//	return root;
//}
//int main()
//{
//	int n; cin >> n;
//	in.resize(n), post.resize(n);
//	_for(i, 0, n) {
//		cin >> in[i];
//		m[in[i]] = i;
//	}
//	_for(i, 0, n) cin >> post[i];
//	node* root = new node;
//	root = tranT(0, n-1, n - 1, root); // Bug1: 第二个参数不是n 
//	queue<node*> q; q.push(root);
//	bool ltor = 0;
//	int floorNum = 0;
//	node* lastEnd = root, *thisEnd = NULL;
//	while (!q.empty()) {
//		node* temp = q.front();
//		q.pop();
//		floorNum++;
//		layer.push_back(temp->d);
//		if (temp->l != NULL) {
//			q.push(temp->l); thisEnd = temp->l;
//		}
//		if (temp->r != NULL) {
//			q.push(temp->r); thisEnd = temp->r;
//		}
//		if (temp == lastEnd) {
//			lastEnd = thisEnd;
//			layerNum.push_back(floorNum);
//			floorNum = 0;
//		}
//	}
//	int y = 0;
//	_for(i, 0, layerNum.size()) {
//		if (ltor)
//		{
//			_for(j, 0, layerNum[i]) {
//				cout << layer[y++];
//				if (y < n) cout << " ";
//			}
//			ltor = 0;
//		}
//		else {
//			ltor = 1;
//			for(int j = layerNum[i] - 1+y; j >= y; j--) {
//				cout << layer[j];
//				if (j>y) cout << " ";
//			}
//			y += layerNum[i];
//			if (y < n) cout << " ";
//		}
//	}
//	return 0;
//}