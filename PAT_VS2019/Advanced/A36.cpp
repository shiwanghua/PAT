//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define mfor(i,a,b) for(int i=(a);i>=(b);--i)
//
//using namespace std;
//
//int mainA36()
//{
//	int n; cin >> n;
//	string name, gender, id,lowName="",highName="",lowid="",highid="";
//	int grade,lowGrade=101,highGrade=-1;
//	_for(i, 0, n)
//	{
//		cin >> name >> gender >> id >> grade;
//		if (grade < lowGrade&&gender=="M")
//		{
//			lowGrade = grade;
//			lowName = name;
//			lowid = id;
//		}
//		else if (grade > highGrade&& gender == "F")
//		{
//			highGrade = grade;
//			highName = name;
//			highid = id;
//		}
//	}
//	if (highGrade != -1)
//		cout << highName << " " << highid << endl;
//	else cout << "Absent\n";
//	if (lowGrade != 101)
//		cout << lowName << " " << lowid << endl;
//	else cout << "Absent\n";
//	if (highGrade != -1 && lowGrade != 101)
//		cout << highGrade - lowGrade;
//	else cout << "NA";
//	return 0;
//}