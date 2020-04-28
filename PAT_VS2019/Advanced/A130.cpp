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
//struct node {
//	string d; int l, r;
//}o[21];
//string ans = "";
//void infix(int root) {
//	bool have = 0;
//	if (o[root].r > 0 || o[root].l > 0)  have = 1;  // Bug1: l 写成了r
//	if(have) ans += "(";
//	if (o[root].l > 0) infix(o[root].l);
//	ans += o[root].d;
//	if (o[root].r > 0) infix(o[root].r);
//	if (have) ans += ")";
//}
//int main()
//{
//	int n, v[21] = { 0 },root; cin >> n;
//	_for(i, 1, n+1) {
//		cin >> o[i].d >> o[i].l >> o[i].r;
//		if (o[i].l > 0)  v[o[i].l] = 1;
//		if (o[i].r > 0) v[o[i].r] = 1;
//	}
//	_for(i, 1, n + 1) if (v[i] == 0) root = i;
//	infix(root);
//	if (ans[0] == '(') cout << ans.substr(1, ans.size() - 2);  // Bug2: 要考虑只有一个节点时没有括号的情况
//	else cout << ans;
//	return 0;
//}