//#include<iostream>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int re, m, n, v[1000], sum = 0, lanI; // lanI������ʯλ��
//bool findm;
//void dfs(int i, int he, int ge) {  //  he �ǵ�ǰ��ѡge�����ֵĺ�
//	if (he >= re || ge == m || findm || i > n) {   //  ����findm ֻ��ͨ��80%��
//		if (he == re && ge == m) findm = 1;
//		return;
//	}
//	if (n - i + 1 + ge < m) return; // ��֦
//	dfs(i + 1, he, ge); //  ��i
//	if (i != lanI)
//		dfs(i + 1, he + v[i], ge + 1); // ��i
//	return;
//}
//int main()
//{
//	cin >> n >> m;
//	m = n - m;
//	_for(i, 0, n + 1) {
//		cin >> v[i];
//		sum += v[i];
//	}
//	// ����ͨ��80%
//   //_for(i, 0, n+1) {
//   //	int re = sum - v[i];
//   //	if (re % 3 == 0) {
//   //		cout << v[i];
//   //		return 0;
//   //	}
//   //}
//
//   //sort(v, v+n+1); // �ı���˳��
//
//   // ͨ��100%!!!
//	_for(i, 0, n + 1) {
//		lanI = i;
//		re = sum - v[i];
//		if (re % 3 == 0) {
//			re = re / 3; // ��m����ʯ�ļ�ֵ����re
//			findm = 0;
//			dfs(0, 0, 0);
//			if (findm) {
//				cout << v[lanI];
//				return 0;
//			}
//		}
//	}
//	cout << "NO";
//	return 0;
//}