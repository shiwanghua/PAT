//#include<iostream>
//#include <iomanip>
//#include <vector>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n, f, d[10001] = { 0 }, a[100001], next[100001], t;
//	vector<int> dup, link;
//	cin >> f >> n;
//	_for(0, n)
//	{
//		cin >> t;
//		cin >> a[t] >> next[t];
//	}
//	if (f == -1) return 0;
//	while (f != -1)
//	{
//		if (d[abs(a[f])] == 0) {
//			link.push_back(f);
//			d[abs(a[f])] = 1;
//		}
//		else {
//			dup.push_back(f);
//		}
//		f = next[f];
//	}
//
//	_for(0, link.size() - 1) //  size()一定大于0
//		printf("%05d %d %05d\n", link[i], a[link[i]], link[i + 1]);
//	printf("%05d %d -1\n", link[link.size() - 1], a[link[link.size() - 1]]);
//	if (dup.size() == 0) return 0;
//	int j = 0;
//	for(j=0;j<dup.size()-1;j++)
//		printf("%05d %d %05d\n", dup[j], a[dup[j]], dup[j + 1]);
//	printf("%05d %d -1\n", dup[j], a[dup[j]]);
//	return 0;
//}