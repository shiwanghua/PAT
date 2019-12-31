//#include<iostream>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//
//using namespace std;
//
//int mainA46()
//{
//	int n, m, a, b, d1, d2, sum = 0,t;
//	cin >> n;
//	int* dis = new int[n];
//	_for(i, 0, n)
//	{
//		cin >> t;
//		sum +=t;
//		dis[i] = sum;// 0-i之和, 1到i+2的距离
//	}
//	cin >> m;
//	_for(i, 0, m)
//	{
//		cin >> a >> b;
//		if (a > b)
//		{
//			a = a ^ b;
//			b = b ^ a;
//			a = a ^ b;
//		}
//		else if (a == b)
//		{
//			cout << 0;
//			if (i != m - 1)
//				cout << endl;
//			continue;
//		}
//		if (a != 1)
//			d1 = dis[b - 2] - dis[a - 2];
//		else d1 = dis[b - 2];
//		d2 = sum - d1;
//		if (d2 > d1) cout << d1;
//		else cout << d2;
//		if (i != m - 1)
//			cout << endl;
//	}
//	return 0;
//}
