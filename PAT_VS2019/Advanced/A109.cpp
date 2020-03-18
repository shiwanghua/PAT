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
//struct peo {
//	string name; int h;
//}p[10000];
//bool cmp(peo p1, peo p2)
//{
//	return p1.h != p2.h ? p1.h<p2.h : p1.name>p2.name;
//}
//void print_(vector<int>& v) {
//	_for(i, 0, v.size()) {
//		cout << p[v[i]].name;
//		if (i < v.size()-1) cout << " ";
//		else cout << endl;
//	}
//	v.clear();
//}
//int main()
//{
//	double n, k; cin >> n >> k;
//	double temp = n / k;
//	int c = (int)(temp + 0.5); // 每行的人数
//	int lastRowNum = (int)n - k * c; // 最后一行的人数，可能为负数！
//	if (lastRowNum < 0) lastRowNum = 0;
//	_for(i, 0, int(n)) 
//		cin >> p[i].name >> p[i].h;
//	sort(p, p + int(n), cmp);
//	vector<int> arow;
//	bool isl = 0;
//	for (int i = n - 1; i >= n - lastRowNum - c; i--)
//	{
//		if (isl) arow.insert(arow.begin(), i);
//		else arow.push_back(i);
//		isl = !isl;
//	}
//	print_(arow);
//	int rowNum = 0; isl = 0;
//	for (int i = n - lastRowNum - c-1; i >= 0; i--) {
//		if (isl) arow.insert(arow.begin(), i);
//		else arow.push_back(i);
//		isl = !isl;
//		rowNum++;
//		if (rowNum == c) {
//			print_(arow);
//			isl = 0;
//			rowNum = 0;
//		}
//	}
//	return 0;
//}