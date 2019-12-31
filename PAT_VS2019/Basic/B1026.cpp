//#include<iostream>
//#include <iomanip>
//
//using namespace std;
//
//int mainb26()
//{
//	const int CLK = 100;
//	int a, b;
//	cin >> a >> b;
//	int s = (b - a) / CLK;
//	int h = s / 3600;
//	int m = s % 3600 / 60;
//	s = s % 60;
//	float v = (float)(b - a)/CLK - h * 3600 - m * 60 - s;
//	if (v>=0.5)
//	cout <<setw(2)<<setfill('0')<< h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s+1;
//	else cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s ;
//	return 0;
//}