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
//	for (int i = 0; i <= l - k; i++)   //  Bug: ûд����
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
//			cout <<setw(k)<<setfill('0')<< s;     //   Bug:  û�����0����2������ͨ����������˺þã�������Ѳ������  
//			return 0;
//		}
//	}
//	cout << 404;
//	return 0;
//}