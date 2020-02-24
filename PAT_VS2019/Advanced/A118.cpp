#include<iostream>
using namespace std;
// Bug: 第1、2行可能互不相同，属于两棵树，第3行与1、2行有交集从而全属于同一颗树
//int main()
//{
//	int n, k, m, q1,q2, cntSet = 1, cntBirds=0,belongSet[10001] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n;i++) {
//		cin >> k;
//		int findSet = -1;
//		int* kP = new int[k];
//		for (int j = 0; j < k;j++) {
//			cin >> kP[j];
//			if (kP[j] > cntBirds) cntBirds = kP[j];
//			if (belongSet[kP[j]] > 0)findSet = belongSet[kP[j]];
//		}
//		if(findSet>0)
//		for (int j = 0; j < k; j++) belongSet[kP[j]] = findSet;
//		else {
//			for (int j = 0; j < k; j++) belongSet[kP[j]] = cntSet;
//			cntSet++;
//		}
//		delete kP;
//	}
//	cout << cntSet-1 << " " << cntBirds << endl;
//	cin >> m;
//	for (int i = 0; i < m;i++) {
//		cin >> q1 >> q2;
//		if (belongSet[q1] == belongSet[q2]) cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//
//	return 0;
//}

int n, q, k, father[10001] = { 0 }, t, root[10001] = { 0 }, maxBird = 0;
int findF(int i) {
	int a = i;
	while (i != father[i]) i = father[i];
	while (a != father[a]) {
		int w = a;
		a = father[a];
		father[w] = i;
	}
	return i;
}
void u(int i, int j) {
	int fi = findF(i);
	int fj = findF(j);
	father[fi] = fj;  //  这一步导致有些位置的father不是最简的！！！所以后面都要用findF而不能之间father[]
}
int main() {
	cin >> n;
	for (int i = 0; i < 10001; i++) father[i] = i;
	for (int i = 0; i < n;i++) {
		cin >> k >> t;
		if (t > maxBird) maxBird = t;
		for (int j = 0; j < k-1; j++) {
			cin >> q;
			if (q > maxBird) maxBird = q;
			u(t, q);
		}
	}
	for (int i = 1; i < 10001; i++)
		root[findF(i)]++;
		//root[father[i]]++;
	int setsNum = 0, q1, q2;
	for (int i = 1; i < 10001; i++)  
		if (root[i] > 1) setsNum++;
	cout << setsNum << " " << maxBird << endl;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> q1 >> q2;
		//if (father[q1] == father[q2]) cout << "Yes\n";
		if (findF(q1) == findF(q2))cout << "Yes\n";
		else cout <<"No\n";
		//cout << "    " << father[q1] << "  " << father[q2] << "    "<<findF(q1)<<"    "<<findF(q2)<<endl;
	}
	return 0;
}