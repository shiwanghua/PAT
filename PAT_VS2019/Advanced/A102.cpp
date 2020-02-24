//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <queue>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int t[1024], n, rootValue, input[10][2], findRoot[10] = { 0 };
//void create(int i, int j) {
//	t[i] = j;
//	if (input[j][0] != -1)
//		create(i * 2 + 1, input[j][0]);
//	if (input[j][1] != -1)
//		create(i * 2 + 2, input[j][1]);
//}
//// 这个函数没用了
//void invert(int i)
//{
//	int lc = 2 * i + 1;
//	int rc = lc + 1;
//	if (lc>1023||t[lc]==-1&&t[rc]==-1) return;
//	invert(lc);
//	invert(rc);
//	int temp = t[lc];
//	t[lc] = t[rc];
//	t[rc] = temp;
//}
//int num = 0;
//void level_invert()
//{
//		queue<int> q;
//		q.push(0);
//		while (!q.empty()) {
//			int i = q.front();
//			q.pop();
//			cout << t[i];
//			num++;
//			if (num < n)cout << " ";
//			else {
//				cout << endl;
//				num = 0;
//			}
//			int lc = 2 * i + 1;
//			int rc = lc + 1;
//			if (rc<1023&&t[rc] != -1)
//				q.push(rc);
//			if (lc<1023&&t[lc] != -1)
//				q.push(lc);
//		}
//	return;
//}
//void in_invert(int i) {
//	if (i > 1023||t[i]==-1) return;
//	in_invert(2 * i + 2);
//	cout << t[i];
//	num++;
//	if (num < n) {
//		cout << " ";
//		in_invert(2 * i + 1);
//	}
//	return;
//	
//}
//int main()
//{
//	scanf("%d", &n);
//	char t1, t2;
//	_for(0, 1024) t[i] = -1;
//	_for(0, n)
//	{
//		scanf("\n%c %c", &t1,&t2);  //  Bug: 空格处理不对
//		if (t1 != '-') {
//			input[i][0] = t1 - '0';
//			findRoot[input[i][0]] = 1;
//		}
//		else input[i][0] = -1;
//		if (t2 != '-') {
//			input[i][1] = t2 - '0';
//			findRoot[input[i][1]] = 1;
//		}
//		else input[i][1] = -1;
//	}
//	_for(0, n) if (findRoot[i] == 0) {
//		rootValue = i;
//		break;
//	}
//	create(0,rootValue); 
////	invert(0);
//	level_invert();
//	in_invert(0);
//	return 0;
//}