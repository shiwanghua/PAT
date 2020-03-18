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
//vector<int> pre, in, post;
//map<int, int> pos;
//int index, n;
//void po(int l, int r,int i) {
//	if (index < 0 || i >= n) return;
//	post[index--] = pre[i];
//	if (r<=l) return;
//	int inPos = pos[pre[i]];
//	po(inPos + 1, r, i + inPos - l + 1);
//	po(l,inPos-1,i+1);
//}
//int main()
//{
//	cin >> n;
//	pre.resize(n), in.resize(n), post.resize(n);
//	_for(i, 0, n) 
//		cin >> pre[i]; 
//	_for(i, 0, n) { cin >> in[i]; pos[in[i]] = i; }
//	index = n - 1;
//	po(0,n-1,0);
//	cout << post[0];
//	return 0;
//}