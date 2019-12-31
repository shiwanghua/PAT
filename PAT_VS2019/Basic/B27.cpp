//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//
//int mainB27()
//{
//	int n; char b; //  忘了获取这个字符输入，debug了好久
//	cin >> n >> b;
//	int a = sqrt((n+1)/2*1.0);   //  第一行有2*a-1个字符，即第a个奇数
//	for (int i = 2*a-1; i >= 1; i -= 2)
//		cout <<setw((2*a-1-i)/2)<<setfill(' ')<<""<< setw(i) << setfill(b) <<""<< endl;   //  这四个空字符串也是弄了一会儿才写出来
//	for (int i = 3; i <= 2*a-1; i += 2)
//		cout << setw((2 * a - 1 - i) / 2) << setfill(' ')<<"" << setw(i) << setfill(b)<<"" << endl;
//	cout << n - 2 * a * a + 1;
//
//	return 0;
//}