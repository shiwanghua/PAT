//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int l, k;
//	string n;
//	cin >> l >> k >> n;
//	for (int i = 0; i <= l - k; i++)   //  Bug: 没写等于
//	{
//		int s = 0;
//		for (int j = i; j < i + k; j++)
//			s = s * 10 + n[j] - '0';
//		if (s == 0 || s == 1) continue;
//		bool is = 1;
//		for (int j = 2; j <= sqrt(s); j++)
//			if (s % j == 0)
//			{
//				is = 0;
//				break;
//			}
//		if (is) {
//			cout <<setw(k)<<setfill('0')<< s;     //   Bug:  没有填充0，第2个用例通不过，检查了好久，最后网友查出来的  
//			return 0;
//		}
//	}
//	cout << 404;
//	return 0;
//}