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
//	int in, base;
//	cin >> in >> base;
//	if (in == 0)
//	{
//		cout << "yes\n0";
//		return 0;
//	}
//	int out[30]; int o=0;
//	while (in > 0) {
//		out[o++] = in % base;
//		in /= base;
//	}
//	// 当base大于9时便不能这样push了, 有两个用例错误
//	/*string out;
//	while (in > 0)
//	{
//		out.push_back(in%base+48);
//		in = in / base;
//	}
//	int l = out.length();*/
//	int l = o;
//	bool flag = true;
//	_for(0, l / 2)
//		if (out[i] != out[l - i - 1])
//			flag = false;
//	if (flag) cout << "yes\n";
//	else cout << "no\n";
//	mfor(l-1, 1)
//		cout << out[i] << " ";
//	cout << out[0];   
//			
//	return 0;
//}