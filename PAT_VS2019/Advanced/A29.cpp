//#include<iostream>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	long int n, m; scanf("%d", &n);
//	long int* q1 = new long int[n];
//	_for(0, n)scanf("%lld", &q1[i]);   //  Bug: Ӧ����lld, ��������ÿ��û��
//	getchar(); //  bug:  ��ȥ����	�����Ӳ���һ���ģ�
//	scanf("%d", &m);
//	long int* q2 = new long int[m];
//	_for(0, m)scanf("%lld", &q2[i]);    //  Bug: Ӧ����lld
//	int mid = (n + m + 1) / 2, i = 0, j = 0, num = 0;    //  ��+1�ĳ�-1������Ƚ�ʱ�Ͳ�Ҫ-1�ˣ�
//	if (mid == 1)                   //  Bug:  û����mid����1�����������num==mid-1�Ƚ�ʱnum�Ѿ���1�˶�mid-1��0��Ҳ������while�����жϵڶ���ifȻ��Ϳ����ˣ����bug���˺þ����ͻȻ��������
//	{
//		if (q1[0] < q2[0]) cout << q1[0];
//		else cout << q2[0];
//		return 0;
//	}
//	while (i < n && j < m)
//	{
//		if (q1[i] < q2[j])
//			i++;
//		else j++;
//		num++;
//		if (num == mid - 1) {
//			if (i < n && j < m)
//			{
//				if (q1[i] < q2[j])
//					cout << q1[i];
//				else cout << q2[j];
//			}
//			else if (i < n)cout << q1[i];
//			else cout << q2[j];
//			return 0;
//		}
//	}
//	while (i < n)
//		if (mid - 1 == num) {
//			cout << q1[i];
//			return 0;
//		}
//		else {
//			num++;
//			i++;
//		}
//	// �������û��û��
//	while (j < m)
//		if (mid - 1 == num) {
//			cout << q2[j];
//			return 0;
//		}
//		else {
//			num++;
//			j++;
//		}
//	return 0;
//}
//
//
////  ��һ��while������if��������
////#include<iostream>
////#include<algorithm>
////using namespace std;
////
////int main()
////{
////	long int n, m; scanf("%lld", &n);
////	long int* q1 = new long int[n];
////	for (int i = 0; i < n; i++)scanf("%lld", &q1[i]);   //  Bug: Ӧ����lld, ��������û��û��
////	getchar(); //  bug:  ��ȥ���س����Ӳ���һ���ģ�
////	scanf("%lld", &m);
////	long int* q2 = new long int[m];
////	for (int i = 0; i < m; i++)scanf("%lld", &q2[i]);    //  Bug: Ӧ����lld
////	int mid = (n + m - 1) / 2, i = 0, j = 0, num = 0;
////	while (i < n && j < m)
////	{
////		if (num == mid) {
////			if (q1[i] < q2[j]) cout << q1[i];
////			else cout << q2[j];
////			return 0;
////		}
////		if (q1[i] <= q2[j])
////			i++;
////		else j++;
////		num++;
////	}
////	while (i < n)
////		if (mid == num) {
////			cout << q1[i];
////			return 0;
////		}
////		else {
////			num++;
////			i++;
////		}
////	while (j < m)
////		if (mid == num) {
////			cout << q2[j];
////			return 0;
////		}
////		else {
////			num++;
////			j++;
////		}
////	return 0;
////}