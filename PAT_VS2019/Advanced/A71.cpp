//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <map>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//map<string, int> si;
//int main()
//{
//	int n, j = 0;
//	string s; getline(cin, s);
//	int len = s.length();
//	while (j < len)
//	{
//		while (!isalnum(s[j])&&j<len) j++;   // Bug: 去掉连续非数字字母字符，直到找到数字字母字符
//		int J = j, num = 0;  //  此时才记录合法j
//		while (isalnum(s[j])&&j<len) {
//			j++;
//			num++;
//		}
//		string get = s.substr(J, num);
//		if (get != "") {    //  加了这个判断后上面的第二个while可加可不加
//			transform(get.begin(), get.end(), get.begin(), ::tolower);
//			if (si.find(get) != si.end())   //  if 和else可以省去，直接+1即可
//				si[get]++;
//			else si[get] = 1;   //   Bug2:   初始值应该是1不是0
//		}
//		j++;
//	}
//	string maxs; int maxnum = 0;
//	for (auto it : si)
//	{
//		if (it.second > maxnum)
//		{
//			maxnum = it.second;
//			maxs = it.first;
//		}
//	}
//	cout << maxs << " " << maxnum;
//	return 0;
//}