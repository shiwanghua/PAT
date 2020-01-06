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
//// 题意是位数小的补0，而不是不算了！
//// 另外if-else里赋值不能直接赋给b了，b可能比a短
//int main()
//{
//	string a, b,d; bool f = true;
//	cin >> a >> b;
//	int l1 = a.length(), l2 = b.length(), t,A,B;
//	char c[14] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' }; // c[13]似乎也可以
//    //or  char c[14] = {"0123456789JQK"};  // 不能是c[13];
//	for (int i = l1-1, j = l2-1; i>=0 || j >=0 ; i--, j--)
//	{
//		if (i >= 0)A = a[i] - '0';
//		else A = 0;
//		if (j >= 0)B = b[j] - '0';
//		else B = 0;
//		if (f)  //  奇数位
//		{
//			t=(A+B)%13;
//			d.push_back(c[t]);
//		}
//		else   //  偶数位
//		{
//			t = B-A;
//			if (t < 0) t += 10;
//			d.push_back(t + '0');
//		}
//		f = !f;
//	}
//	mfor(d.length()-1,0)
//	cout << d[i];
//	return 0;
//}