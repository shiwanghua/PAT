//#include<iostream>
//#include<string>
//#include <queue>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, in[100], t1=0, t2;
//struct node {
//	int lc, rc, d;
//}N[100];
//void inO(int index) {
//	if (index==-1)return;
//	inO(N[index].lc);
//	N[index].d = in[t1++];
//	inO(N[index].rc);
//}
//int main()
//{
//	scanf("%d", &n);
//	_for(0, n) scanf("%d%d", &N[i].lc, &N[i].rc);
//	_for(0, n) scanf("%d", &in[i]);
//	sort(in, in + n);
//	inO(0);
//	cout << N[0].d;
//	queue<int> q;
//	q.push(0);
//	while (!q.empty()) {
//		t2 = q.front();
//		q.pop();
//		int rc = N[t2].rc, lc = N[t2].lc;
//		if (lc != -1) {
//			cout << " " << N[lc].d;
//			q.push(lc);
//		}
//		if (rc != -1) {
//			cout << " " << N[rc].d;
//			q.push(rc);
//		}
//	}
//	return 0;
//}