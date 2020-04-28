//#include<iostream>
//#include<cstring>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n, m, e[201][201], visit[201] = { 0 }, t1, t2, k, q, begin;
//	cin >> n >> m;
//	_for(i, 0, m) {
//		cin >> t1 >> t2;
//		e[t1][t2] = e[t2][t1] = 1;
//	}
//	cin >> k;
//	while (k--) {
//		cin >> q;
//		bool is = 1;
//		if (q != n + 1) is = 0;  //  这里不能continue, 也不能写小于n+1
//		memset(visit, 0, 804);   //  804写成了 sizeof(804)
//		cin >> begin; 
//		visit[begin] = 1; 
//		t1 = begin;
//		_for(i, 1, q) {
//			cin >> t2; 
//			visit[t2] = 1;
//			if (e[t1][t2] == 0) is = 0;  // 这里不能break, 不然未读的数据会当作下一循环的数据
//			t1 = t2;
//		}
//		_for(i, 1, n + 1) if (visit[i] == 0) is = 0;
//		if (is && begin == t2) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}