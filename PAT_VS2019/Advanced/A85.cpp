//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	long long n, p, max, min, maxnum = 0;
//	cin >> n >> p;
//	int* a = new int[n];
//	_for(0, n) cin >> a[i];
//	sort(a, a + n);
//
//	max = min = 0;
//	while (max != n && min != n - maxnum)   //   Bug:  ������max!=n-1 
//	{
//		if (a[max] <= (long long)a[min] * p)
//			max++;  //  �¼ӵ����û�������飬max-1���Ǻϸ��
//		else min++;
//		if (maxnum < max - min)
//			maxnum = max - min;
//	}
//	cout << maxnum;       
//	return 0;
//}