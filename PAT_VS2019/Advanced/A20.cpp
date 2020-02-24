//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//struct node { int value, index; };
//vector<int> in, post;
//vector<node> ans;
//int n;
//void lev(int l, int r, int root,int index) {
//	if (l > r)  return;
//	int i = l;
//	while (i < r && in[i] != post[root])i++;
//	ans.push_back({ post[root],index });
//	lev(l, i - 1, root - 1 - r + i, 2 * index+1);
//	lev(i + 1, r, root - 1, 2 * index + 2);
//}
//bool cmp(node a,node b)
//{
//	return a.index < b.index;
//}
//int main()
//{
//	cin >> n;
//	in.resize(n), post.resize(n);
//	for (int i = 0; i < n; i++) cin >> post[i];
//	for (int i = 0; i < n; i++) cin >> in[i];
//	lev(0,n-1,n-1,0);
//	sort(ans.begin(), ans.end(), cmp);
//	for (int i = 0; i < n - 1; i++) cout << ans[i].value << " ";
//	cout << ans[n - 1].value;
//
//
//	return 0;
//}