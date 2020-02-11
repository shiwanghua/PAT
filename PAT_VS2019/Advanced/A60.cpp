//#include<iostream>
//#include<string>
//#include <iomanip>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//// Bug1: 没考虑开始的0，要计算有效位位置
//// Bug2: 没考虑指数的变化，指数不等于长度
////Bug3: 没考虑判断两个字符串相等还要判断其指数相等
//// 最后抄的答案
//int main()
//{
//	int n; string a, b; bool is = 1;
//	cin >> n >> a >> b;
//	int da = a.length(), db=b.length(); //  小数点下标
//	int ya = 0, yb = 0; //   有效数字下标
//	_for(0, a.length())
//		if (a[i] == '.')
//		{
//			da = i;
//			break;
//		}
//	_for(0, b.length())
//		if (b[i] == '.')
//		{
//			db = i;
//			break;
//		}
//	while (a[ya] == '0' || a[ya] == '.') ya++;
//	while ( b[yb] == '0' || b[yb] == '.') yb++;
//	int ea, eb; // 指数
//	if (ya > da) ea = da + 1 - ya;
//	else ea = da - ya;
//	if (yb > db) eb = db + 1 - yb;
//	else eb = db - yb;
//	if (ya == a.length()) ea = 0;
//	if (yb == b.length()) eb = 0;
//	int indexa = 0, indexb = 0;
//	string A="", B="";
//	while (indexa < n) {
//		if (ya < a.length() && a[ya] != '.')
//			A = A + a[ya];
//		else if (ya >= a.length())
//			A = A + "0";
//		else indexa--;
//		ya++; indexa++;
//	}
//	while (indexb < n) {
//		if (yb < b.length() && b[yb] != '.')
//			B = B + b[yb];
//		else if (yb >= b.length())
//			B = B + "0";
//		else indexb--;
//		yb++; indexb++;
//	}
//	if (A == B && ea == eb)
//		cout << "YES 0." << A << "*10^" << ea;
//	else cout << "NO 0." << A << "*10^" << ea << " 0." << B << "*10^" << eb;
//		return 0;
//}