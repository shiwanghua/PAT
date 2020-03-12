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
//// 求出现最多次数的众数
//// 不是很确定，但是100%通过。  11min
//int main()
//{
//	int n, x,t;
//	cin >> n >> x;
//	vector<int> v, num1,num2;
//	v.resize(n); num1.resize(1001); num2.resize(1001);
//	_for(i, 0, n) {
//		cin >> v[i];
//		num1[v[i]]++;
//		t = v[i] | x;
//		if (t == v[i]) continue;
//		num2[t]++;
//	}
//	int maxT = -1;
//	_for(i, 1, 1000)
//		if (maxT < num1[i] + num2[i]) maxT = num1[i] + num2[i];
//	cout << maxT;
//	return 0;
//}