//#include<iostream>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int lc = 0, rc = 0, data = 0;;
//}N[1000];
//int preTra = 0,mirror[1000], mirrorNum=0,postNum = 0, n;
//bool isPre1=1,isPre2 = 1;
//void Pre(int index) {
//	if (index != preTra) {
//		isPre1 = 0;
//		return;
//	}
//	preTra++;
//	if (N[index].lc != 0) Pre(N[index].lc);
//	if (N[index].rc != 0)Pre(N[index].rc);
//	return;
//}
//void Mirror(int index) {
//	mirror[mirrorNum++] = N[index].data;
//	if (N[index].rc != 0)Mirror(N[index].rc);
//	if (N[index].lc != 0) Mirror(N[index].lc);
//	return;
//}
//void Post(int index) {
//	if (N[index].lc != 0)Post(N[index].lc);
//	if (N[index].rc != 0)Post(N[index].rc);
//	cout << N[index].data;
//	postNum++;
//	if (index!=0) cout << " ";
//	return;
//}
//void MirrorPost(int index) {
//	if (N[index].rc != 0)MirrorPost(N[index].rc);
//	if (N[index].lc != 0)MirrorPost(N[index].lc);
//	cout << N[index].data;
//	postNum++;
//	if (postNum < n) cout << " ";
//	return;
//}
//int main()
//{
//	int t; scanf("%d\n%d", &n,&t);
//	N[0].data = t;
//	_for(1, n) {
//		scanf("%d", &N[i].data);
//		t = 0;
//		while (N[t].data > 0 ) {  //   while(true)
//			if (N[t].data > N[i].data) {
//				if (N[t].lc == 0) {
//					N[t].lc = i;
//					break;
//				}
//				t = N[t].lc;
//			}  
//			else {
//				if (N[t].rc == 0) {
//					N[t].rc = i;
//					break;
//				}
//				t = N[t].rc;
//			}
//		}   //  end while
//	}
//	Pre(0);
//	Mirror(0);
//	_for(0,n)
//		if (N[i].data != mirror[i])
//		{
//			isPre2 = 0;
//			break;
//		}
//	if (isPre1 == 0&&isPre2==0) {
//		cout << "NO";
//		return 0;
//	}
//	cout << "Yes" << endl;
//	if (isPre1)
//		Post(0); // ²»ÊÇ¾µÏñ
//	else MirrorPost(0);
//	return 0;
//}