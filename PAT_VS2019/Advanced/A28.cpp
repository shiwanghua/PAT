//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct stu {
//	int id, grade;
//	string name;
//};
//int c;
//bool cmp(stu s1, stu s2)
//{
//	if (c == 1) return s1.id < s2.id;
//	else if (c == 2) return s1.name != s2.name ? s1.name < s2.name : s1.id < s2.id;
//	else if (c == 3) return s1.grade != s2.grade ? s1.grade < s2.grade : s1.id < s2.id;
//}
//// Bug: 最后输出时用cout会超时
//int main()
//{
//	int n; cin >> n >> c;
//	stu* s = new stu[n];
//	_for(0, n) 
//		cin >> s[i].id >> s[i].name >> s[i].grade;
//	sort(s, s + n, cmp);
//	//_for(0, n) cout <<setw(6)<<setfill('0')<< s[i].id << " " << s[i].name << " " << s[i].grade << endl;
//	_for(0, n) printf("%06d %s %d\n",s[i].id,s[i].name.c_str(),s[i].grade);
//	return 0;
//}