//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<cmath>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//vector<int> power, ans, temp;
//int n, k, p, maxSumFac=0;
//void DFS(int index, int nowK, int sum, int sumFac) {
//	if (sum == n && nowK == k) {  
//		if (sumFac > maxSumFac)  //  Bug: ����if���ܺϲ���һ��if����Ϊ��return
//		{
//			ans = temp;
//			maxSumFac = sumFac;
//		}
//		return;  // Bug3��sum<n �� nowK����kʱҲ����return�ˣ����ﲻӰ��ͨ�����ԣ����԰�sum==n�Ƶ������if�� �����������if��� nowK>=k
//	}
//	if (nowK > k || sum > n) return;   //  �����˴����ѹջ�����ڲŷ��أ������������ٶȣ������ڵݹ����DFSʱ�ж�
//	if (index >= 1) {
//		temp.push_back(index);
//		DFS(index, nowK + 1, sum + power[index], sumFac + index);
//		temp.pop_back();
//		DFS(index - 1, nowK, sum, sumFac);  //Bug2: ��������ǰ������index-1 push��pop��һ��
//	}
//}
//
//int main()
//{
//	cin >> n >> k >> p;
//	int t1 = 0, t2 =pow(double(t1++), double(p));
//	while (t2<=n) {
//		power.push_back(t2);
//		t2 = pow(double(t1++), double(p));
//	}
//	DFS(power.size() - 1, 0, 0, 0);
//	if (maxSumFac == 0) {
//		cout << "Impossible";
//		return 0;
//	}
//	printf("%d = %d^%d", n,ans[0],p);
//	_for(1, ans.size())
//		printf(" + %d^%d", ans[i], p);
//	return 0;
//}