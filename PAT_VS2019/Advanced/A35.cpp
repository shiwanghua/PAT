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
//	int n, n_ans = 0, l;
//	bool is;
//	cin >> n;
//	string u, p;
//	string** ans = new string*[n];
//	_for(0,n)
//	ans[i] = new string[2];
//
//	_for(0, n)
//	{
//		is = 0;
//		cin >> u >> p;
//		l = p.length();
//		_for(0, l)
//		{
//			if (p[i] == '1')
//			{
//				p[i] = '@';
//				is = 1;
//			}
//			else if (p[i] == '0')
//			{
//				p[i] = '%';
//				is = 1;
//			}
//			else if (p[i] == 'l')
//			{
//				p[i] = 'L';
//				is = 1;
//			}
//			else if (p[i] == 'O')
//			{
//				p[i] = 'o';
//				is = 1;
//			}
//		}
//		if (is)
//		{
//			ans[n_ans][0] = u;
//			ans[n_ans][1] = p;
//			n_ans++;
//		}
//	}
//
//	if (n_ans == 0 && n == 1)
//		printf("There is 1 account and no account is modified");
//	else if (n_ans == 0)
//		printf("There are %d accounts and no account is modified", n);
//	else {
//		cout << n_ans << endl;
//		_for(0, n_ans)
//			printf("%s %s\n", ans[i][0].c_str(), ans[i][1].c_str());
//	}
//	return 0;
//}