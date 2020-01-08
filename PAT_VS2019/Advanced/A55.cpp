//#include<iostream>
//#include<cstring>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//
//struct people {
//	char name[9];
//	int v, age;
//};
//bool cmp(people p1, people p2)
//{
//	if (p1.v != p2.v) return p1.v > p2.v;
//	else if (p1.age != p2.age) return p1.age < p2.age;
//	else return strcmp(p1.name, p2.name) < 0;
//}
//// Bug: 没利用m<=100先去掉同一个年龄超过100的人，去掉后再去做查询可减少总人数
//int main()
//{
//	int n, k, m, min, max; scanf("%d %d", &n, &k);
//	people* p = new people[n];
//	_for(0, n) scanf("%s %d %d", p[i].name, &p[i].age, &p[i].v);
//	sort(p,p+n, cmp);
//
//	vector<people> pp; // 去掉p中同一个年龄超过100个的人
//	int book[201] = { 0 };
//	_for(0, n)
//	{
//		if (book[p[i].age] < 100)
//		{
//			book[p[i].age]++;
//			pp.push_back(p[i]);
//		}
//	}
//	_for(0, k)
//	{
//		vector<people> fit;
//		scanf("%d %d %d", &m, &min, &max);
//		for (int j = 0; j < pp.size(); j++)
//			if (pp[j].age >= min && pp[j].age <= max)
//				fit.push_back(pp[j]);  // 这里可直接输出，不用fit保存了
//		
//		printf("Case #%d:\n", i + 1);
//		if (fit.size() == 0)printf("None\n");
//		else for (int j = 0; j < m && j < fit.size(); j++)
//			printf("%s %d %d\n", fit[j].name, fit[j].age, fit[j].v);
//	}
//	return 0;
//}
//
////用string+scanf，还是有一个超时，不是输入输出的原因了
////#include<iostream>
////#include<string>
////#include<memory.h>
////#include <iomanip>
////#include <vector>
////#include<algorithm>
////#include<math.h>
////
////#define _for(a,b) for( int i=a; i<b; ++i)
////
////using namespace std;
////
////struct people {
////	string name;
////	int v, age;
////};
////bool cmp(people p1, people p2)
////{
////	if (p1.v != p2.v) return p1.v > p2.v;
////	else if (p1.age != p2.age) return p1.age < p2.age;
////	else return p1.name < p2.name;
////}
////int main()
////{
////	int n, k, m, min, max; scanf("%d %d", &n, &k);
////	people* p = new people[n];
////	_for(0, n) {
////		p[i].name.resize(8);
////		scanf("%s %d %d", &p[i].name[0], &p[i].age, &p[i].v);
////	}
////	_for(0, k)
////	{
////		vector<people> fit;
////		cin >> m >> min >> max;
////		for (int j = 0; j < n; j++)
////			if (p[j].age >= min && p[j].age <= max)
////				fit.push_back(p[j]);
////		sort(fit.begin(), fit.end(), cmp);
////		printf("Case #%d:\n", i + 1);
////		if (fit.size() == 0)printf("None\n");
////		else for (int j = 0; j < m && j < fit.size(); j++)
////			printf("%s %d %d\n", fit[j].name.c_str(), fit[j].age, fit[j].v);
////	}
////	return 0;
////}