//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//bool isP(string a)    //   可以直接和反过来的string判断是否相等来判断是否是回文
//{
//	int l = a.length();
//	for (int i = 0; i < l / 2; i++)
//	{
//		if (a[i] != a[l - i - 1])
//			return false;
//	}
//	return true;
//}
//string plus1(string a, string b)
//{
//	int l = a.length(), jin = 0;
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	for (int i = 0; i < l; i++)
//	{
//		jin = jin + a[i] - '0' + b[i] - '0';
//		a[i] = jin % 10 + '0';
//		jin = jin / 10;
//	}
//	if (jin)
//		a += "1";
//	reverse(a.begin(), a.end());
//	return a;
//}
//int main()
//{
//	string n;
//	long int k;
//	cin >> n >> k;
//	for (int i = 0; i < k; i++)
//	{
//		if (isP(n))
//		{
//			cout << n << endl << i;
//			return 0;
//		}
//		string t = n;
//		reverse(n.begin(), n.end());
//		n = plus1(n, t);
//	}
//	cout << n << endl << k;
//	return 0;
//}