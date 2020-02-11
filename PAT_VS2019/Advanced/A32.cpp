//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, a1, a2, t, next[100000], l1 = 0, l2 = 0, commonLen;
//	char g;
//	cin >> a1 >> a2 >> n;
//	_for(0, n) {
//		cin >> t;
//		cin >> g;
//		cin >> next[t];
//	}
//	t = a1;
//	while (t != -1)
//	{
//		t = next[t];
//		l1++;
//	}
//	t = a2;
//	while (t != -1)
//	{
//		t = next[t];
//		l2++;
//	}
//	if (l1 < l2) {
//		int dis = l2 - l1;
//		//commonLen = l1;
//		while (dis--) a2 = next[a2];
//	}
//	else if (l1 > l2) {
//		int dis = l1 - l2;
//		//commonLen = l2;
//		while (dis--) a1 = next[a1];
//	}
//	while (a1 != a2 && a1 != -1) {
//		a1 = next[a1];
//		a2 = next[a2];
//	}
//	if (a1 != -1)
//		cout << setw(5) << setfill('0') << a1;
//	else cout << -1;
//	return 0;
//}