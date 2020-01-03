//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define mfor(i,a,b) for(int i=(a);i>=(b);--i)
//
//using namespace std;
//
//int mainb32()
//{
//	int n, s1, s2, maxi = 1, maxs = 0; cin >> n;
//	int a[100001] = { 0 };   //   本来是100000，导致最后一个用例通不过
//	while (n--)
//	{
//		cin >> s1 >> s2;
//		a[s1] += s2;
//		if (maxs < a[s1])
//		{
//			maxi = s1;
//			maxs = a[s1];
//		}
//	}
//	cout << maxi << " " << maxs;
//	return 0;
//}