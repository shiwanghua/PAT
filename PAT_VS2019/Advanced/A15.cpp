//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <cmath>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//bool isP(int a)
//{
//	if (a <= 1)return false;   //    Bug1: ����1ʱҲҪ����false��
//	int s = (int)sqrt(1.0 * a);
//	for (int i = 2; i <= s; i++)   //  Bug2: Ӧ����С�ڵ���s  ������
//		if (a % i == 0) return false;
//	return true;
//}
//int main()
//{
//	int n, r; cin >> n;
//	int a[100] = { 0 };
//	while (n > 0)
//	{
//		cin >> r;
//		if (!isP(n)) {
//			cout << "No\n";
//			cin >> n;
//			continue;
//		}
//		int i = 0;
//		do {
//			a[i++] = n % r;
//			n = n / r;
//		} while (n > 0);
//		for (int j = 0; j < i; j++)
//			n = n * r + a[j];
//		if (isP(n)) cout << "Yes\n";
//		else cout << "No\n";
//		cin >> n;
//	}
//	return 0;
//}