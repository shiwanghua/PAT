//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<map>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int month;
//map<string, int> to;
//struct record {
//	int  type = 0, time; // type==1是on-line, 0是off-line
//};
//struct user {
//	string name;
//	vector<record> r;
//};
//bool cmp(user u1, user u2)
//{
//	return u1.name <= u2.name;
//}
//bool cmp2(record r1, record r2)
//{
//	return r1.time <= r2.time;
//}
//// Bug: 需要保存所有的记录而不是处理一条仍一条，因为记录的顺序是乱的，需要按时间排序
//int main()
//{
//	int c[24], n, d, h, m, n_user = 0, ti;
//	string name, t;
//	vector<user> u;
//	_for(0, 24)cin >> c[i];
//	cin >> n;
//	_for(0, n)
//	{
//		cin >> name;
//		scanf("%d:%d:%d:%d", &month, &d, &h, &m);
//		cin >> t;
//		ti = d * 1440 + h * 60 + m;
//		if (to[name] > 0)   u[to[name] - 1].r.push_back({ t == "on-line" ? 1 : 0,ti });
//		else  // 新用户
//		{
//			u.push_back(user{ name });
//			u[n_user].r.push_back(record{ t == "on-line" ? 1 : 0,ti });
//			to[name] = ++n_user;
//		}
//	}
//	_for(0, n_user)   sort(u[i].r.begin(), u[i].r.end(), cmp2);
//	sort(u.begin(), u.end(), cmp);
//	_for(0, n_user)
//	{
//		int money = 0;
//		vector<record> temp = u[i].r;
//		cout << u[i].name << " " << setw(2) << setfill('0') << month << endl;
//		for (int j = 0; j < temp.size();)
//		{
//			//  Bug: 要找离off-line前面最近的on-line，而不是离online后面最近的offline ！
//			int jj = j + 1;
//			while (jj < temp.size() && temp[jj].type) jj++;  // 找到一个off-line
//			j = jj - 1;
//			if (temp[j].type == 0) { j = jj + 1; continue; }
//			if (jj == temp.size()) break;
//			int j_money = 0, minute = temp[jj].time - temp[j].time;
//			for (int q = temp[j].time; q < temp[jj].time; ) {
//				int h = q % 1440 / 60, m = 60 - q % 60;
//				if (m + q > temp[jj].time) m = temp[jj].time - q;
//				j_money += c[h] * m;
//				q += m;
//			}
//			money += j_money;
//			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", temp[j].time / 1440, temp[j].time % 1440 / 60, temp[j].time % 60, temp[jj].time / 1440, temp[jj].time % 1440 / 60, temp[jj].time % 60, minute, double(j_money) / 100);
//			j = jj + 1;
//		}
//		cout << "Total amount: $" << fixed << setprecision(2) << double(money) / 100 << endl;
//	}
//	return 0;
//}