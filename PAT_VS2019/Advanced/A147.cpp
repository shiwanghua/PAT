//#include<iostream>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//bool isMax = 1,isMin = 1;
//int t[1000], n, m;
//void tra(int index) {
//	int lc = index * 2 + 1, rc = index * 2 + 2;
//	if (isMax == 0 && isMin == 0) return;
//	if (lc >= n) return;
//	else if (rc == n) {
//		if (t[index] < t[lc]) isMax = 0;
//		if (t[index] > t[lc]) isMin = 0;
//		if (lc < n) tra(lc);
//		return;
//	}
//	if (t[index] < t[lc] || t[index] < t[rc]) isMax = 0;
//	if (t[index] > t[lc] || t[index] > t[rc]) isMin = 0;
//	if (lc < n) tra(lc);
//	if (rc < n) tra(rc);
//	return;
//}
//void post(int index) {
//	int lc = index * 2 + 1, rc = index * 2 + 2;
//	if (lc < n) post(lc);
//	if (rc < n) post(rc);
//	cout << t[index];
//	if (index != 0) cout << " ";
//	else cout << endl;
//	return;
//}
//int main()
//{
//	scanf("%d%d", &m, &n);
//	_for(0, m) {
//		for (int j = 0; j < n; j++) scanf("%d", &t[j]);
//		isMax = 1;
//		isMin = 1;
//		tra(0);
//		if (isMax) cout << "Max Heap\n";
//		else if (isMin) cout << "Min Heap\n";
//		else cout << "Not Heap\n";
//		post(0);
//	}
//	return 0;
//}
