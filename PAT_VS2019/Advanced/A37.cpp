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
//	int nc, np, ci = 0, pi = 0, m = 0;
//	cin >> nc;
//	int* c = new int[nc];
//	_for(0, nc) cin >> c[i];
//	cin >> np;
//	int* p = new int[np];
//	_for(0, np) cin >> p[i];
//
//	sort(c, c + nc);
//	sort(p, p + np);
//	while (c[ci] < 0 && p[pi] < 0)
//	{
//		m += c[ci] * p[pi];
//		ci++; pi++;
//		if (ci == nc || pi == np) break;
//	}
//	nc--; np--;
//	while (c[nc] > 0 && p[np] > 0)
//	{
//		m += c[nc] * p[np];
//		nc--; np--;
//		if (np < 0 || nc < 0) break;
//	}
//	cout << m;
//
//	return 0;
//}