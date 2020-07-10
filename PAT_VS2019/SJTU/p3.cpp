//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<unordered_map>
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
//	int n, ans = 0, great = 1; cin >> n;
//	if (n == 0) {
//		cout << 0;
//		return 0;
//	}
//	vector<int> v(n),f(n),h(n); 
//	_for(i, 0, n) cin >> v[i];
//
//	f[0] = 1;
//	h[0] = 1;
//	great = v[1];
//	if (v[1] > v[0])
//	{
//		f[1] = 2;
//		h[1] = 1;
//	}
//	else {
//		f[1] = 1;
//		h[0] = 0;
//		h[1] = 1;
//	}
//
//	_for(i, 2, n) {
//		f[i] = f[i - 1];
//		if (v[i] > v[i - 1]&&h[i-1]) {
//			great = v[i];
//			f[i]++;
//			h[i] = 1;
//		}
//		int j = i - 2;
//		while (j >= 0 && v[j] > v[i])j--;
//		// 如果没有比v[i]小的数
//		if (f[i] == 1) {
//			great = v[i];
//			h[i] = 1;
//			int j = i-1;
//			while (j >= 0) {
//				h[j] = 0;
//				j--;
//			}
//		}
//		// 存在比v[i]小的数
//		if (j>=0 && f[j] + 1 >= f[i] &&great>v[i]) {
//			great = v[i];
//			f[i] = f[j] + 1;
//			h[i] = 1;
//		}
//
//		ans = max(ans, f[i]);
//	}
//	cout << ans;
//	return 0;
//}
