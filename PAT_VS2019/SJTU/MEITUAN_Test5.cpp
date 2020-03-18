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
//	int n; cin >> n;
//	const int c = 998244353;
//	int* p = new int[n];
//	int p0 = 1, p1 = 1, p2 = 1;
//	
//	_for(i, 0, n)
//	{
//		cin >> p[i];
//		p0 = p0 * p[i];
//	}
//	int t = c;
//	cout << p0 << endl;
//	while (t % p0 != 0) t = t + c;
//	p0 = t / p0;
//	cout << p0;
//
//	return 0;
//}