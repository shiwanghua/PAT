//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//
//int mainB27()
//{
//	int n; char b; //  ���˻�ȡ����ַ����룬debug�˺þ�
//	cin >> n >> b;
//	int a = sqrt((n+1)/2*1.0);   //  ��һ����2*a-1���ַ�������a������
//	for (int i = 2*a-1; i >= 1; i -= 2)
//		cout <<setw((2*a-1-i)/2)<<setfill(' ')<<""<< setw(i) << setfill(b) <<""<< endl;   //  ���ĸ����ַ���Ҳ��Ū��һ�����д����
//	for (int i = 3; i <= 2*a-1; i += 2)
//		cout << setw((2 * a - 1 - i) / 2) << setfill(' ')<<"" << setw(i) << setfill(b)<<"" << endl;
//	cout << n - 2 * a * a + 1;
//
//	return 0;
//}