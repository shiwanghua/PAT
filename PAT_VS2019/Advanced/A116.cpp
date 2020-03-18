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
//
//int main()
//{
//	int n, q, notP[10001] = { 0 }, haveQ[10001] = { 0 }, t;
//	map<int, int> m;
//	cin >> n; int sn = sqrt(n)+1;
//	_for(i, 2, sn)
//	{
//		int j = i*2;  //  Bug1: 应该乘以2
//		while (j <= n) {
//			notP[j] = 1;
//			j += i; // Bug2: 应该+i而不是j
//		}
//	} 
//	cin >> t;
//	m[t] = 1;
//	_for(i, 2, 1+n) {
//		cin >> t;
//		if (notP[i]) m[t] = 3;
//		else m[t] = 2;
//	}
//	cin >> q;
//	while (q--) {
//		cin >> t; printf("%04d: ", t);
//		if (m[t]==0) {
//			cout << "Are you kidding?\n";
//			continue;
//		}
//		if (haveQ[t] == 1) {
//			cout << "Checked\n";
//			continue;
//		}
//		haveQ[t] = 1;
//		switch (m[t]){
//		case 1:cout << "Mystery Award\n"; break;
//		case 2:cout << "Minion\n"; break;
//		case 3: cout << "Chocolate\n"; break;
//		}
//	}
//	return 0;
//}