//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> pre, post, inorder;
//bool Unique = 1;
//void in(int l, int r, int inl, int inr, int postl, int postr) {
//	if (l > r) return;
//	if (l == r) {
//		inorder[inl] = pre[l]; return;
//	}
//	int iPost = postl;
//	while (post[iPost] != pre[l + 1]) iPost++;
//	if (l + iPost - postl + 1 == r) Unique = 0;
//	inorder[inl + iPost - postl + 1] = pre[l];
//	in(l + 1, l + iPost - postl + 1, inl, inl + iPost - postl, postl, iPost);
//	in(l + iPost - postl + 2, r, inl + iPost - postl + 2, inr, iPost + 1, postr);
//}
//int main()
//{
//	int n; cin >> n;
//	pre.resize(n);
//	post.resize(n);
//	inorder.resize(n);
//	_for(i, 0, n) cin >> pre[i];
//	_for(i, 0, n) cin >> post[i];
//	in(0, n - 1, 0, n - 1, 0, n - 1);
//	if (Unique) cout << "Yes" << endl;
//	else cout << "No\n";
//	_for(i, 0, n - 1) cout << inorder[i] << " ";
//	cout << inorder[n - 1] << endl; //  这题有点奇怪，最后这里必须输出空格，否则格式错误
//	return 0;
//}