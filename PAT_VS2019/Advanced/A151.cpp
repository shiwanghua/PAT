//#include<iostream>
//#include<map>
//#include<vector>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> in, pre;
//map<int, int> pos; //  ����ڵ�ķ�Χ����һ�����ڣ�pos������������
//
//void lca(int l, int r, int preIndex, int a, int b) {
//	if (l > r) return;
//	int preInPos = pos[pre[preIndex]], aIn = pos[a], bIn = pos[b];
//	if (preInPos > aIn&& preInPos > bIn)
//		lca(l, preInPos - 1, preIndex + 1, a, b);
//	else if (preInPos < aIn && preInPos < bIn)
//		lca(preInPos + 1, r, preIndex + 1 + preInPos - l, a, b);
//	else if ((aIn < preInPos && preInPos < bIn) || (aIn > preInPos&& bIn < preInPos))
//		printf("LCA of %d and %d is %d.\n", a, b, in[preInPos]);// Bug: û��дin[]���µ�һ������ͨ����������˼�Сʱ
//	else if (aIn == preInPos) printf("%d is an ancestor of %d.\n", a, b);
//	else if (bIn == preInPos)printf("%d is an ancestor of %d.\n", b, a);
//}
//int main()
//{
//	int n, m, a, b; cin >> m >> n;
//	in.resize(n + 1), pre.resize(n + 1);
//	_for(1, n + 1) {
//		cin >> in[i];
//		pos[in[i]] = i;
//	}
//	_for(1, n + 1)cin >> pre[i];
//	_for(0, m)
//	{
//		cin >> a >> b;
//		int aPos = pos[a], bPos = pos[b];
//		if (aPos == 0 && bPos == 0) printf("ERROR: %d and %d are not found.\n", a, b);
//		else if (aPos == 0) printf("ERROR: %d is not found.\n", a);
//		else if (bPos == 0) printf("ERROR: %d is not found.\n", b);
//		else lca(1, n, 1, a, b);
//	}
//
//	return 0;
//}