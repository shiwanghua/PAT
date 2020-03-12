//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	string d, next = "";
//	int n; cin >> d >> n;
//	_for(0, n-1) {
//		next = "";
//		for (int j = 0; j < d.length();) {
//			int time = 0;
//			char temp = d[j];
//			while (j < d.length() && d[j] == temp) { time++; j++; }
//			next += temp + to_string(time);
//		}
//		d = next;
//	}
//	cout << d;
//	return 0;
//}