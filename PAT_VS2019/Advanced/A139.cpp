//#include<iostream>
//#include <vector>
//#include <string>
//#include<map>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int r1, r2;
//};
//bool cmp(node n1, node n2) {
//	return n1.r1 != n2.r1 ? n1.r1 < n2.r1 : n1.r2 < n2.r2;
//}
//map<int, int> to, re;
//vector<node> ans;
//int bNum = 0, gNum = 200; //  �������� / Ů������  1-200�����ԣ�201-400��Ů�Ա��
//int geti(int o) {  //  ӳ�䣬���
//	if (to[o] != 0) return to[o];
//	to[o] = o > 0 ? ++bNum : ++gNum;
//	re[o > 0 ? bNum : gNum] = o;  // ӳ���ȥ
//	return to[o];
//}
//int main()
//{
//	int n, m, f[400][400], t1, t2, k; scanf("%d%d", &n, &m);
//	string a, b;
//	fill(f[0], f[0] + 400 * 400, 0);  //  ��¼���ѹ�ϵ
//	_for(i, 0, m) {
//		cin >> a >> b;
//		t1 = stoi(a);
//		if (a[0] == '-' && t1 == 0)  t1 = -10000;
//		t1 = geti(t1);
//		t2 = stoi(b);
//		if (b[0] == '0' && t2 == 0) t2 = 10000;
//		t2 = geti(t2);
//		f[t1][t2] = f[t2][t1] = 1;
//	}
//	cin >> k;
//	_for(i, 0, k) {
//		ans.clear();
//		cin >> t1 >> t2;
//		bool rev = 0;
//		if (t1 < 0 && t2>0) {  //  Ů��  ����  ��Ů
//			t1 = t1 ^ t2;
//			t2 = t1 ^ t2;
//			t1 = t1 ^ t2;
//			rev = 1; // �����Ҫ��һ��
//		}
//		t1 = geti(t1);  // ��Ů /  ���� /  ŮŮ
//		t2 = geti(t2);
//		if (t1 <= bNum)  // ��
//		{
//			_for(j, 1, bNum + 1)  //  �з����ѱ���������
//				if (j != t2 && f[t1][j]) {  // �ҵ���һ������j  //  Bug1: j���ܵ���t2
//					if (t2 > 200) // ��Ů
//					{
//						_for(q, 201, gNum + 1)  // Ů�����ѱ�����Ů��
//							if (q != t1 && f[t2][q] && f[j][q]) {   // t1���ܵ���q
//								if (rev)
//									ans.push_back({ abs(re[q]),abs(re[j]) });
//								else
//									ans.push_back({ abs(re[j]),abs(re[q]) });
//							}
//					}
//					else { // ����
//						_for(q, 1, bNum + 1)
//							if (q != t1 && f[t2][q] && f[j][q]) {
//								ans.push_back({ abs(re[j]),abs(re[q]) });
//							}
//					}
//				} // Bug2: ������Ų�����ȥ��
//		}
//		else // ŮŮ
//			_for(j, 201, gNum + 1)
//			if (j != t2 && f[t1][j])
//				_for(q, 201, gNum + 1)
//				if (t1 != q && f[t2][q] && f[j][q])
//					ans.push_back({ abs(re[j]),abs(re[q]) });
//		cout << ans.size() << endl;
//		sort(ans.begin(), ans.end(), cmp);
//		for (int i = 0; i < ans.size(); i++)
//			// cout << ans[i].r1 << " " << ans[i].r2 << endl;  //  Bug3:  Ӧ�������4λ
//			printf("%04d %04d\n", ans[i].r1 % 10000, ans[i].r2 % 10000);
//	}
//	return 0;
//}