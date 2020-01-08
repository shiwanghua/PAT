//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//#include<map>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//#define __for(a,b) for(int i=a; i<=b;++i)
//#define mfor(a,b) for(int i=a;i>=b;--i)
//
//using namespace std;
//
//int month;
//struct record {
//	int  n=0,*dd=new int[100], *hh=new int[100], *mm=new int[100]; // type=1是on-line, 0是off-line
//	bool  temp_t = 0;
//};
//struct user {
//	string name;
//	record r;
//}u[20];
//
//bool cmp(user u1, user u2)
//{
//
//	return u1.name <= u2.name;
//}
//
//// Bug: 需要保存所有的记录而不是处理一条仍一条，因为记录的顺序是乱的，需要按时间排序
//int main()
//{
//	int c[25], n, d, h, m, n_user=0;
//	string name, t; 
//	bool e;
//	_for(0, 24)cin >> c[i];
//	cin >> n;
//	_for(0, n)
//	{
//		cin >> name;
//		scanf("%d:%d:%d:%d",&month,&d,&h,&m);
//		cin >> t;
//		e = false;// 存在该用户
//		for(int j = 0; j < n_user; j++)
//		{
//			if (u[j].name == name)
//			{
//				e = true;
//				if (u[j].r.temp_t == 0&&t=="on-line" || u[j].r.temp_t == 1 && t == "off-line")  // 可以插入新记录
//				{
//					u[j].r.temp_t = !u[j].r.temp_t;
//					u[j].r.dd[u[j].r.n] = d;
//					u[j].r.hh[u[j].r.n] = h;
//					u[j].r.mm[u[j].r.n] = m;
//					u[j].r.n++;
//				}
//			}
//		}
//		if (!e && t == "on-line") // 新用户
//		{
//				u[n_user].name = name;
//				u[n_user].r.temp_t =1;
//				u[n_user].r.dd[0] = d;
//				u[n_user].r.hh[0] = h;
//				u[n_user].r.mm[0] = m;
//				u[n_user].r.n++;
//				n_user++;
//		}
//	}
//
//	sort(u, u + n_user,cmp);
//	
//	_for(0, n_user)
//	{
//		int money = 0, minute = 0;
//		record temp = u[i].r;
//		cout << u[i].name << " " << month<<endl;
//		if (u[i].r.n % 2 == 1)  u[i].r.n--; // 最后一个记录是单的，丢弃
//		for(int j=0; j<u[i].r.n;j+=2)
//		{
//			int jj = j + 1;
//			int j_money = 0;
//			while(temp.dd[j]< u[i].r.dd[jj]|| temp.hh[j] < u[i].r.hh[jj] || temp.mm[j] < u[i].r.mm[jj])
//			{
//				j_money += c[temp.hh[j]];
//				minute++;
//				temp.mm++;
//				if (temp.mm[j] == 60)
//				{
//					temp.mm[j] = 0;
//					temp.hh[j]++;
//				}
//				if (temp.hh[j] == 24)
//				{
//					temp.hh[j] = 0;
//					temp.dd[j]++;
//				}
//			}
//			money += j_money;
//			cout << setw(2) << u[i].r.dd[j] << ":" << setw(2) << u[i].r.hh[j] << ":" << setw(2) << u[i].r.mm[j] << " ";
//			printf("%02d:%02d:%02d %d $%.2f\n",u[i].r.dd[jj],u[i].r.hh[jj],u[i].r.mm[jj],minute,double(j_money)/100);
//		}
//		cout << "Total amount: $" << fixed << setprecision(2) << double(money) / 100 << endl;
//
//	}
//	return 0;
//}