//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//#define __for(a,b) for(int i=a; i<=b;++i)
//#define mfor(a,b) for(int i=a;i>=b;--i)
//
//using namespace std;
//
//int main()
//{
//	int n,cn=0,l,tl; cin >> n; getchar();// 读取回车! 自己找出来的bug
//	bool test;
//	string s[100];
//	_for(0, n)
//		getline(cin, s[i]);
//	l = s[0].length();
//	for(;cn<l;cn++)
//	{
//		test = true;
//		char a = s[0][l -1- cn];
//		for(int j=1;j<=n-1;j++)
//		{
//			tl = s[j].length();
//			if (cn < tl)
//			{
//				if (s[j][tl - 1 - cn] != a)
//				{
//					test = false;
//					break;
//				}
//			}
//			else {
//				test = false;
//				break;
//			}
//		}
//		if (!test) break;
//	}
//
//	if (cn)
//		_for(l-cn, l)cout << s[0][i];
//	else cout << "nai";
//	return 0;
//}