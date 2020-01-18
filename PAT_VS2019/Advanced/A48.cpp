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
//	int n, m,t; cin >> n >> m;
//	// 超时
//	/*int* coin = new int[n];
//	_for(0, n) cin >> coin[i];
//	sort(coin, coin + n);
//	bool f = 0;
//	_for(0, n)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			t = coin[i] + coin[j];
//			if (t== m)
//			{
//				cout << coin[i] << " " << coin[j];
//				f = 1;
//				return 0;
//			}
//			else if (t > m) break;
//		}
//	}
//	if (!f) cout << "No Solution";*/
//
//	int c[1000] = { 0 };
//	_for(0, n) {
//		cin >> t;
//		c[t]++;
//	}
//	_for(0, m)
//	{
//		if (c[i])
//		{
//			c[i]--;
//			if (c[m - i])  //  Bug: m可能小于i ！！！加一句 "m>i" 或者直接在for条件里写m而不是n
//			{
//				cout << i << " " << m - i;
//				return 0;
//			}
//			c[i]++;
//		}
//	}
//	cout << "No Solution";
//	return 0;
//}