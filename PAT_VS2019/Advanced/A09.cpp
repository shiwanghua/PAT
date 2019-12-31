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
//int mainA09()
//{
//	double a[1001] = { 0.0 }, b[1001] = { 0.0 }, c[2001] = { 0.0 };
//	int e;
//	int n;
//	cin >> n;
//	_for(i, 0, n)
//	{
//		cin >> e;
//		cin >> a[e];
//	}
//	cin >> n; // 这行本来漏写了，纠错了好久
//	_for(i, 0, n)
//	{
//		cin >> e;
//		cin >> b[e];
//	}
//	/*cout << "b:\n";
//	_for(i, 0, 1001)
//	{
//		if (b[i] != 0.0)
//			cout << b[i] << " ";
//	}cout << endl;*/
//
//	_for(i,0,1001)
//	{
//		if(a[i]!=0.0)
//		_for(j, 0, 1001)
//		{
//			if (b[j] != 0.0)
//			{
//				c[i + j] += a[i] * b[j];
//				//cout << a[i] << " * " << b[j] << " = " << c[i+j] << endl;
//			}
//		}
//	}
//
//	n = 0;
//	_for(i, 0, 2001)
//		if (c[i] != 0.0)
//			n++;
//	printf("%d", n);
//	mfor(i, 2000, 0)
//		if (c[i] != 0.0)
//			printf(" %d %.1f", i, c[i]);
//	return 0;
//}