//#include<iostream>
//#include <vector>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int r[10000];
//int getR(int i) {
//	int ti = i;
//	while (r[ti] != ti) ti = r[ti];
//	while (r[i] != i) {
//		int temp = r[i];
//		r[i] = ti;
//		i = temp;
//	}
//	return ti;
//}
//void join(int a, int b) {
//	int ra = getR(a);
//	int rb = getR(b);
//	if (ra < rb) r[rb] = ra;
//	else r[ra] = rb;
//}
//struct family {
//	int num = 0, id; double me, ae;
//};
//bool cmp(family fa, family fb) {
//	return fa.ae != fb.ae ? fa.ae > fb.ae:fa.id < fb.id;
//}
//int main()
//{
//	int n,id,f,m,k,c; cin >> n;
//	int num[10000] = { 0 }, M[10000] = { 0 }, A[10000] = { 0 }, e[10000] = { 0 };
//	_for(i, 0, 10000) r[i] = i;
//	_for(i, 0, n) {
//		cin >> id >> f >> m >> k;
//		num[id] = 1; // Bug: 漏掉了这句
//		if (f != -1) {
//			join(id, f); num[f] = 1;
//		}
//		if (m != -1) {
//			join(id, m); num[m] = 1;
//		}
//		_for(j, 0, k) {
//			cin >> c;
//			join(id, c);
//			num[c] = 1;
//		}
//		cin >> M[id] >> A[id];
//	}
//	vector<family> v;
//	_for(i, 0, 10000) {
//		if (num[i] != 0) {
//			int fr = getR(i);
//			if (e[fr] == 0) { //  新加入一个家庭
//				e[fr] = v.size()+1; //  从1开始，家族编号
//				family temp;
//				temp.id = fr;
//				temp.num = 1;
//				temp.me = M[i];
//				temp.ae = A[i];
//				v.push_back(temp);
//			}
//			else { // 加到旧家族集合
//				int fi = e[fr] - 1;
//				v[fi].num++;
//				v[fi].me += M[i];
//				v[fi].ae += A[i];
//			}
//		}
//	}
//	_for(i, 0, v.size())
//	{
//		v[i].ae /= v[i].num;
//		v[i].me /= v[i].num;
//	}
//	sort(v.begin(), v.end(), cmp);
//	cout << v.size() << endl;
//	_for(i, 0, v.size()) 
//		printf("%04d %d %.3lf %.3lf\n", v[i].id, v[i].num, v[i].me, v[i].ae);
//	
//	return 0;
//}