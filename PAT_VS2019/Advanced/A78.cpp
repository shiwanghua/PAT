//#include<iostream>
//#include<string>
//#include <memory.h>
//#include <cmath>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//bool isP(int p)
//{
//	if (p <= 1) return false;
//	int s = (int)sqrt(1.0 * p);
//	for (int i = 2; i <= s; i++)
//		if (p % i == 0) return false;
//	return true;
//}
//
//int main()
//{
//	int p, n, y, m; cin >> p >> n;
//	bool exc;
//	while (!isP(p))p++;
//	int* in = new int[n], * h = new int[p];//  Bug: p±¾À´ÊÇn
//	memset(h, 0, p * 4);
//	_for(0, p) cin >> in[i];
//	_for(0, n)
//	{
//		exc = 1;
//
//		for (int j = 0; j < p; j++)
//		{
//			y = (in[i] + j * j) % p; 
//			if (h[y] == 0) {
//				h[y] = in[i];
//				cout << y;
//				exc = 0;
//				break;
//			}
//		}
//		if (exc) cout << "-";
//		if (i != (n - 1))
//			cout << " ";
//	}
//	return 0;
//}