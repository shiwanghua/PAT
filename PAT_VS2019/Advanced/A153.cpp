//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//using namespace std;
//struct stu {
//	char c;
//	int no, y, m, d, id, grade;
//};
//struct room {
//	int num = 0, no;
//};
//bool cmp1(stu s1, stu s2)
//{
//	if (s1.grade != s2.grade) return s1.grade > s2.grade;
//	else if (s1.c != s2.c) return s1.c < s2.c;
//	else if (s1.no != s2.no) return s1.no < s2.no;
//	else if (s1.y != s2.y) return s1.y < s2.y;
//	else if (s1.m != s2.m) return s1.m < s2.m;
//	else if (s1.d != s2.d) return s1.d < s2.d;
//	else return s1.id < s2.id;
//}
//bool cmp2(room r1, room r2)
//{
//	return r1.num != r2.num ? r1.num > r2.num : r1.no < r2.no;
//}
//
//// 同B95
//int main()
//{
//	int n, m, t; cin >> n >> m;
//	bool find;
//	stu* s = new stu[n];
//	for (int i = 0; i < n; i++)
//		scanf("\n%c%3d%2d%2d%2d%3d %d", &s[i].c, &s[i].no, &s[i].y, &s[i].m, &s[i].d, &s[i].id, &s[i].grade); // Bug1: scanf忘加\n
//	for (int i = 1; i <= m; i++)
//	{
//		find = false;
//		cin >> t;
//		if (t == 1)
//		{
//			char l;
//			cin >> l;
//			sort(s, s + n, cmp1);
//			cout << "Case " << i << ": " << 1 << " " << l << endl;
//			for (int j = 0; j < n; j++)
//				if (s[j].c == l)
//				{
//					printf("%c%03d%02d%02d%02d%03d %d\n", s[j].c, s[j].no, s[j].y, s[j].m, s[j].d, s[j].id, s[j].grade); // Bug2: s[j]写成了s[i], 直接从上面复制下来的
//					find = true;
//				}
//		}
//		else if (t == 2)
//		{
//			int no, num = 0, grade = 0; cin >> no;
//			cout << "Case " << i << ": " << 2 << " " << no << endl;
//			for (int j = 0; j < n; j++)
//				if (s[j].no == no)
//				{
//					num++;
//					grade += s[j].grade;
//				}
//			if (num > 0)
//			{
//				cout << num << " " << grade << endl;
//				find = true;
//			}
//		}
//		else {  // t==3
//			int y, m, d;
//			scanf("%2d%2d%2d", &y, &m, &d);
//			cout << "Case " << i << ": " << 3 << " " << setw(2) << setfill('0') << y << setw(2) << setfill('0') << m << setw(2) << setfill('0') << d << endl;
//			room r[1000]; // 101到999
//			for (int k = 0; k <= 999; k++)
//				r[k].no = k;
//			for (int j = 0; j < n; j++)
//				if (s[j].y == y && s[j].m == m && s[j].d == d)
//					r[s[j].no].num++;
//			sort(r, r + 1000, cmp2);
//			for (int j = 0; j < 900; j++)
//				if (r[j].num > 0)
//				{
//					//printf("%d %d\n", r[j].no, r[j].num);  
//					cout << r[j].no << " " << r[j].num << endl;
//					find = true;
//				}
//		}
//
//		if (!find) cout << "NA\n";
//	}
//	return 0;
//}