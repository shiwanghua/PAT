//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <queue>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int l, r,index;
//}N[20];
//int main()
//{
//	int n, e[20] = { 0 }, exist[2000] = { 0 }, rootIndex; cin >> n;
//	_for(0, n) {
//		string a, b;
//		cin >> a >> b;
//		if (a == "-") N[i].l = -1;
//		else {
//			N[i].l = stoi(a);
//			e[stoi(a)] = 1;  //  ÓÐ¸¸½Úµã
//		}
//		if (b == "-")N[i].r = -1;
//		else {
//			N[i].r = stoi(b);
//			e[stoi(b)] = 1;
//		}
//		N[i].index = i;
//	}
//	_for(0,n)
//		if (e[i] == 0) {
//			rootIndex = i;
//			break;
//		}
//	int i = 1, last;
//	exist[i] = 1;
//	queue<node> q;
//	q.push(N[rootIndex]);
//	while (!q.empty()) {
//		node t = q.front();
//		q.pop();
//		if (t.l >= 0) {
//			exist[i * 2] = 1;
//			q.push(N[t.l]);
//		}
//		if (t.r >= 0) {
//			exist[i * 2 + 1] = 1;
//			q.push(N[t.r]);
//		}
//		if (i == n) last = t.index;
//		i++;
//	}
//	bool is = 1;
//	_for(1, n+1)
//		if (exist[i] == 0)
//			is = 0;
//	if (is) cout << "YES " << last;
//	else {
//		cout << "NO " << rootIndex;
//	}
//	return 0;
//}