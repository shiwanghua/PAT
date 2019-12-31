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
//int mainA31()
//{
//	string s; cin >> s; 
//	int l = s.length(), n1, n3 = l / 3;
//	while (true)
//	{
//		if (l - n3 +2 <= 2 * n3 && (l - n3) % 2 == 0)  //  本来忘了+2, 导致出逻辑错误，部分正确
//		{
//			n1 = (l - n3) / 2;
//			break;     //  本来忘了写break， 导致没有输出
//		}
//			n3++;
//	}
//	_for( 0, n1)
//		cout << s[i] << setw(n3 - 1) << setfill(' ') << s[l - 1 - i] << endl;
//	_for(n1, n1 + n3)
//		cout << s[i];
//	return 0;
//}
