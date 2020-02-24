//#include<iostream>
//#include<string>
//#include <algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int father[1001], hobby_people[1001] = { 0 }, k, set_num = 0, h;
//int findFather(int i) {
//	int t = i;
//	while (i != father[i]) i = father[i];
//	while (t != father[t]) {
//		int t2 = father[t];
//		father[t] = i;
//		t = t2;
//	}
//	return i;
//}
//void Union(int a, int b) {
//	a = findFather(a);
//	b = findFather(b);
//	father[b] = a;
//}
//int main()
//{
//	int n; scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++)  father[i] = i;
//	for (int i = 1; i < 1+n; i++) {
//		scanf("%d: ",&k);
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &h);
//			if (hobby_people[h] == 0) hobby_people[h] = i;
//			else {
//				int f = findFather(hobby_people[h]);
//				Union(f, i);
//			}
//		}
//	}
//	int* isRoot = new int[n+1];
//	_for(1, 1+n) isRoot[i] = 0;
//	for (int i = 1; i < n + 1; i++) {
//		isRoot[findFather(i)]++; //  Bug:  应该是findFather而不是father
//	}
//	_for(1, 1 + n)
//		if (isRoot[i]) set_num++;
//	sort(isRoot+1,isRoot+n+1);
//	cout << set_num << endl << isRoot[n];
//	for (int i = n - 1; i > n - set_num; i--)
//		cout <<" "<< isRoot[i];
//	return 0;
//}