//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//const int open = 8 * 3600, End = 17 * 3600;
//struct user {
//	int p, a,endTime=0;//  ����ʱ�䣬����ʱ��, ����ʱ��
//}u[10000];
//
//bool cmp(user u1, user u2) {
//	return u1.a < u2.a;
//}
//bool cmp2(user u1, user u2) {
//	return u1.endTime < u2.endTime;
//}
//
//int main()
//{
//	int n, k, time, t1, t2, t3, t4, num = 0; cin >> n >> k;
//	double waitTime = 0.0;
//	_for(0, n) {
//		scanf("%d:%d:%d %d", &t1, &t2, &t3, &t4);
//		if (t1 >= 17) continue;
//		if (t4 > 60) t4 = 60; //  ����1h������Ϊ1h
//		time = t1 * 3600 + t2 * 60 + t3;
//		u[num].p = t4*60;
//		u[num++].a = time;
//	}
//	sort(u, u + num, cmp);
//	if (k > num) k = num;   //  ��ʵ�������ֱ�����0.0
//	_for(0, k) {
//		u[i].endTime = max(open,u[i].a) + u[i].p;
//		//if (u[i].endTime > End) u[i].a = u[i].p = u[i].endTime = 0;   // �ֶ��࣡
//	}
//	_for(k, num) {  //  ��num����num-k
//		sort(u + i - k, u + i, cmp2);
//		u[i].endTime = u[i].p + max(u[i].a, u[i - k].endTime);
//		//if (u[i].endTime > End) u[i].a = u[i].p = u[i].endTime = 0;
//	}
//	_for(0, num)  //	if (u[i].a < open) u[i].a = open;  // Bug: �����Ƕ����
//		waitTime += u[i].endTime - u[i].a - u[i].p;
//	printf("%.1lf", waitTime / num/60);
//	return 0;
//}