//#include<iostream>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//typedef long long ll;
//
//vector<int> p(500000, 1);
//int main()
//{
//	int n; cin >> n; cout << n << "=";
//	for (int i = 2; i * i < 500000; i++)
//		for (int j = 2; j * i < 500000; j++)
//			p[i * j] = 0;
//	if (n == 1) cout << "1";
//	bool s = 0;
//	for (int i = 2; n >= 2; i++) {
//		bool f = 0;
//		int cnt = 0;
//		while (n % i == 0 && p[i] == 1)
//		{
//			cnt++;
//			n = n / i;
//			f = 1;
//		}
//		if (f)
//		{
//			if (s) cout << "*";
//			cout << i;
//			s = true;
//		}
//		if (cnt > 1)cout << "^" << cnt;
//	}
//
//	return 0;
//}