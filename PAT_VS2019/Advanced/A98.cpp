//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	int ini[100], mid[100];
//	_for(0, n) cin >> ini[i];
//	_for(0, n)cin >> mid[i];
//	int dif = n - 1, dif2, insert = 0;
//	// Bug3: �Ӻ������õ�����ǰһ����ԭʼ������ͬ������ͬʱҲ���Ѿ��źõ��������������, Ӧ�����Ѿ��ź��˵�
//	// while (dif > 0 && mid[dif] == ini[dif]) dif--;
//	// dif2 = dif + 1;
//	// for (; dif > 0; dif--)
//	// 	if (mid[dif] < mid[dif - 1])
//	// 	{
//	// 		insert = 0;
//	// 		break;
//	// 	}
//	int p = 1;
//	while (p <= n - 1 && mid[p - 1] <= mid[p]) p++;
//	dif2 = p;
//	while (p <= n - 1 && ini[p] == mid[p]) p++;
//	if (p == n) insert = 1;
//	if (insert == 1) {
//		cout << "Insertion Sort\n";
//		for (; dif2 > 0; dif2--)
//			if (mid[dif2] < mid[dif2 - 1])
//				swap(mid[dif2], mid[dif2 - 1]);
//			else break;
//	}
//	else {
//		cout << "Heap Sort\n";
//		dif = n - 1;
//		while (dif > 0 && mid[dif] >= mid[0])dif--;   //  Bug1: Ӧ����>=mid[0] ������ mid[dif-1]
//		int t = mid[dif], root = 0, swap_i;
//		mid[dif] = mid[0];
//		while (true) {
//			int rc = root * 2 + 2, lc = root * 2 + 1;
//			if (lc >= dif) {         //  Bug2:  û�ж��Ƿ�Խ��
//				mid[root] = t;
//				break;
//			}
//			if (rc < dif && mid[lc] < mid[rc])
//				swap_i = rc;
//			else swap_i = lc;
//
//			if (mid[swap_i] > t) {
//				mid[root] = mid[swap_i];
//				root = swap_i;
//			}
//			else {
//				mid[root] = t;
//				break;
//			}
//		}
//	}
//	_for(0, n - 1)cout << mid[i] << " ";
//	cout << mid[n - 1];
//	return 0;
//}