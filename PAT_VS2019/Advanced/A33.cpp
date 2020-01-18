//#include<iostream>
//#include <iomanip>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//struct sta {
//	double p, d;
//};
//bool cmp(sta a,sta b)
//{
//	return a.d < b.d;
//}
//// Bug: 不能一开始就加满油再选接下来的最大里程内最便宜的加油站
//int main()
//{
//	double cmax, d, dave, gone = 0.0, can_go=0.0, cnow = 0.0, p = 0.0;
//	int n, i, j,min_i;
//	cin >> cmax >> d >> dave >> n;
//	const double max_d = cmax * dave;
//	sta* s = new sta[n];
//	_for(i,0, n)
//		cin >> s[i].p >> s[i].d;
//	sort(s, s + n, cmp);
//	if (s[0].d != 0) {
//		cout << "The maximum travel distance = 0.0";
//		return 0;
//	}
//	i = 0; 
//	while (gone < d)
//	{
//		if (s[i].d + max_d < s[i + 1].d && i + 1 < n)
//		{
//			cout << "The maximum travel distance = " << fixed << setprecision(2) << gone + max_d;
//			return 0;
//		}
//		min_i = j = i + 1;
//		while (j < n&&s[j].p >= s[i].p && gone + max_d >= s[j].d)
//		{
//			if (s[min_i].p > s[j].p)
//				min_i = j;
//			j++;
//		}
//		if (gone + max_d >= d&&s[i].p<=s[min_i].p)   // 直接从 i 跑到目的地
//		{
//			cout << p + s[i].p * (d - s[i].d-can_go) / dave;
//			return 0;
//		}
//		if (j == n|| gone + max_d < s[j].d) // 从 i 走到min_i, 但在i处加满油
//		{
//			p = p + s[i].p * (cmax-can_go/dave);
//			can_go = max_d + s[i].d - s[min_i].d ;
//			gone = s[min_i].d;
//			i = min_i;
//			/*cout << "1到第" << i << "个加油站，走了" << gone << "公里，花了" << p << endl;*/
//		}
//		else if (s[j].p < s[i].p)  // 从 i 走到j
//		{
//			p = p + s[i].p * (s[j].d - s[i].d-can_go) / dave;  //  can_go一定小于i到j的距离
//			can_go = 0.0;
//			gone = s[j].d;
//			i = j;
//			/*cout << "2到第" << i << "个加油站，走了" << gone << "公里，花了" << p << endl;*/
//		}
//
//		if (i == n - 1)
//		{
//			if (gone + max_d < d)  //  不一定到达最后一个加油站才走不动了！！！
//				cout << "The maximum travel distance = " << fixed << setprecision(2) << gone + max_d;
//			else
//				cout << fixed << setprecision(2) << p + (d - s[i].d - can_go) / dave * s[i].p;
//			return 0;
//		}
//	}
//	return 0;
//}