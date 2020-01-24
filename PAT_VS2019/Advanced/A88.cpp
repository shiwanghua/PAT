//#include<iostream>
//#include<string>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//long int g(long long a, long long b)
//{
//	if (b == 0) return abs(a);
//	else return g(b, a % b);
//}
//void show(long long a, long long b)
//{
//	if (a < 0)
//		cout << "(";
//	if (b == 1) cout << a;
//	else if (abs(a) / b > 0)
//	{
//		cout << a / b;
//		a = a - a / b * b;
//		if (a != 0)cout << " " << abs(a) << "/" << b;
//	}
//	else if (a == 0) cout << 0;
//	else cout << a << "/" << b;
//	if (a < 0) cout << ")";
//	return;
//}
//void sim(long long& a, long long& b)
//{
//	long int c = g(a, b);
//	a = a / c;
//	b = b / c;
//	if (b < 0) {
//		a = -a;
//		b = -b;
//	}
//	return;
//}
//int main()
//{
//	long long a1, b1, a2, b2, res1, res2;
//	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);  //  Bug:如果是long int型会有异常但是可以通过
//	sim(a1, b1);
//	sim(a2, b2);
//	show(a1, b1);
//	cout << " + ";
//	show(a2, b2);
//	cout << " = ";
//	res1 = a1 * b2 + a2 * b1;
//	res2 = b1 * b2;
//	sim(res1, res2);
//	show(res1, res2);
//	cout << endl;
//
//	show(a1, b1);
//	cout << " - ";
//	show(a2, b2);
//	cout << " = ";
//	res1 = a1 * b2 - a2 * b1;
//	res2 = b1 * b2;
//	sim(res1, res2);
//	show(res1, res2);
//	cout << endl;
//
//	show(a1, b1);
//	cout << " * ";
//	show(a2, b2);
//	cout << " = ";
//	res1 = a1 * a2;
//	res2 = b1 * b2;
//	sim(res1, res2);
//	show(res1, res2);
//	cout << endl;
//
//	show(a1, b1);
//	cout << " / ";
//	show(a2, b2);
//	cout << " = ";
//	res1 = a1 * b2;
//	res2 = a2 * b1;
//	if (res2 != 0)
//	{
//		sim(res1, res2);
//		show(res1, res2);
//	}
//	else cout << "Inf";
//
//	return 0;
//}