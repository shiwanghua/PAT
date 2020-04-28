//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int nv, ne, e[201][201], m, k, exist[201] = { 0 },t1,t2; cin >> nv >> ne;
//	fill(e[0], e[0] + 201 * 201, 0); // Bug4: 应该初始化e
//	_for(i, 0, ne) {
//		cin >> t1 >> t2;
//		exist[t1] = exist[t2] = e[t1][t2] = e[t2][t1] = 1;
//	}
//	vector<int> v;
//	int inClique[201] = { 0 };
//	cin >> m;
//	while (m--) {
//		cin >> k;
//		v.clear();
//		fill(inClique, inClique + nv + 1, 0); // Bug3: 应该初始化inClique
//		_for(i, 0, k) {
//			cin >> t1;
//			inClique[t1] = 1;
//			v.push_back(t1);
//		}
//		int is = 1; // Bug2: 类型不是bool，应该是int
//		_for(i, 0, k) {
//			if (exist[v[i]] == 0&&k!=1) { is=0; break; }  // Bug1: 如果k是1就还是Clique
//			else if (exist[v[i]] == 0) { break; }
//			_for(j, i+1, k)  //  Bug2: 这里应该加一
//				if (e[v[i]][v[j]] == 0) { is = 0; break; }
//		}
//		if (is) {
//			_for(i, 1, nv+1) {
//				if (inClique[i] == 0) {
//					bool allC = 1;
//					_for(j, 0, k) {
//						if (e[i][v[j]] == 0) {
//							allC = 0; break;
//						}
//					}
//					if (allC) {
//						is = 2;
//						break;
//					}
//				}
//			}
//			if (is == 1) cout << "Yes\n";
//			else cout << "Not Maximal\n";
//		}
//		else cout << "Not a Clique\n";
//	}
//	return 0;
//}