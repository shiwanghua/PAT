//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define __for(i,a,b) for( int i=(a); i<=(b); ++i)
//
//using namespace std;
//
//string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
//string in[4];
//int day=0; //  0-6
//int hour; // 0-23
//int minute=0; // 0-59
//
//int main()
//{
//	_for(i,0,4)
//	cin >> in[i];
//	//int min1 = in[0].length() > in[1].length() ? in[1].length() : in[0].length();
//	//int min2 = in[2].length() > in[3].length() ? in[3].length() : in[2].length();
//
//	while (in[0].at(day) != in[1].at(day)||in[0].at(day)-'A'<0|| in[0].at(day) - 'A'>6)
//		day++;
//	hour = day + 1;
//	while (in[0].at(hour) != in[1].at(hour)|| in[0].at(hour)-'0'<0 || (in[0].at(hour)-'0'>9 && in[0].at(hour)-'A'<0) || in[0].at(hour)-'A'>13)
//		hour++;
//
//	day = in[0].at(day) - 'A';
//	if (in[0].at(hour) - '0' < 10)
//		hour = in[0].at(hour) - '0';
//	else hour = 10 + in[0][hour] - 'A';
//
//	while (in[2].at(minute) != in[3].at(minute) ||  in[2].at(minute) - 'A' < 0 || (in[2].at(minute) - 'A'>25 && in[2].at(minute)-'a'<0)|| in[2].at(minute)-'a'>25)
//	{
//		minute++;
//	}
//
//	cout << week[day] << " ";
//	if (hour < 10)
//		cout << "0" <<hour<<":";
//	else cout << hour<<":";
//	if (minute < 10)
//		cout << "0" + to_string(minute);
//	else cout << minute;
//	return 0;
//}