//#include<iostream>
//#include <cmath>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	long long n; cin >> n;
//	long long i_se = 0, max_i = -1, max_se = -1, sq = (long long)sqrt(1.0 * n);
//	for (long long i = 2; i <= sq; i++)
//	{
//		long long temp = i_se = i;
//		while (n % temp == 0)
//			temp *= ++i_se;
//		if (i_se - i > max_se)
//		{
//			max_i = i;
//			max_se = i_se - i;
//		}
//	}
//	if (max_i == -1)   //  Bug1: 是质数的情况
//	{
//		cout << 1 << endl << n;
//		return 0;
//	}
//	cout << max_se << endl;
//	_for(max_i, max_i + max_se - 1)
//		cout << i << "*";
//	cout << max_i + max_se - 1;
//	return 0;
//}
