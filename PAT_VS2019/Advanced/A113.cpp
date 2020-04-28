//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	int a[100000];
//	_for(i, 0, n) cin >> a[i];
//	sort(a, a + n);
//	int sum1 = 0, sum2 = 0;
//	_for(i, 0, n / 2) sum1 += a[i];
//	_for(i, n / 2, n)sum2 += a[i];
//	if (n % 2 == 0) cout << "0 " << sum2 - sum1;
//	else cout << "1 " << sum2 - sum1;
//	return 0;
//}