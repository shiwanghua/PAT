//#include<iostream>
//#include<string>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct stu {
//	string name, id;
//	int grade;
//};
//bool cmp(stu s1, stu s2) { return s1.grade > s2.grade; }
//int main()
//{
//	int n, min, max, m = 0;
//	cin >> n;
//	stu* s = new stu[n];
//	_for(0, n)
//		cin >> s[i].name >> s[i].id >> s[i].grade;
//	cin >> min >> max;
//	sort(s, s + n, cmp);
//	_for(0, n)
//	{
//		if (s[i].grade >= min && s[i].grade <= max)
//		{
//			cout << s[i].name << " " << s[i].id << endl;     //  Bug: ÍüÁËÊä³ö¿Õ¸ñ£¡£¡
//			m++;
//		}
//	}
//	if (m == 0) cout << "NONE\n";
//	return 0;
//}