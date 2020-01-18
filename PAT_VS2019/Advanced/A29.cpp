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
//	_for(0, n)scanf("%lld", &q1[i]);   //  Bug: 应该用lld, 不过这里每加没事
//	getchar(); //  bug:  忘去掉回	车，加不加一样的！
//	scanf("%d", &m);
//	long int* q2 = new long int[m];
//	_for(0, m)scanf("%lld", &q2[i]);    //  Bug: 应该用lld
//	int mid = (n + m + 1) / 2, i = 0, j = 0, num = 0;    //  把+1改成-1，后面比较时就不要-1了！
//	if (mid == 1)                   //  Bug:  没考虑mid等于1的情况，下面num==mid-1比较时num已经是1了而mid-1是0，也可以在while里先判断第二个if然后就可以了，这个bug找了好久最后突然碰出来的
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
//	// 下面这段没加没事
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
////  第一个while里两段if互换即可
////#include<iostream>
////#include<algorithm>
////using namespace std;
////
////int main()
////{
////	long int n, m; scanf("%lld", &n);
////	long int* q1 = new long int[n];
////	for (int i = 0; i < n; i++)scanf("%lld", &q1[i]);   //  Bug: 应该用lld, 不过这里没加没事
////	getchar(); //  bug:  忘去掉回车，加不加一样的！
////	scanf("%lld", &m);
////	long int* q2 = new long int[m];
////	for (int i = 0; i < m; i++)scanf("%lld", &q2[i]);    //  Bug: 应该用lld
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