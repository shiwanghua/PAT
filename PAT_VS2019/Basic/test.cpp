//#include<iostream>
//#include<string>
//#include<cstdio>
//#include <iomanip>
//#include <vector>
//#include<cmath>
//#include<algorithm>
//
//#define _for(a,b) for( int i=(a); i<(b); ++i)
//#define __for(i,a,b) for( int i=(a); i<=(b); ++i)
//
//using namespace std;
//
//int main()
//{	
//	/*int a = 8, b = 4;
//	cout << a ^ b;*/
//
//	vector<int> v;v.resize(10);
//	_for(0, 10) v[i] = i;
//	 v.resize(10);
//	_for(0, 10)cout << v[i] << " ";
//	//cout << "type: \t\t\t" << "************size**************" << endl;
//	//cout << "short: \t\t\t" << "字节数：" << sizeof(short) << endl;
//	//cout << "最大值：" << (numeric_limits<short>::max)();
//	//cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
//	//cout << "int: \t\t\t" << "字节数：" << sizeof(int) << endl;
//	//cout << "最大值：" << (numeric_limits<int>::max)();
//	//cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
//	//cout << "unsigned: \t\t" << "字节数：" << sizeof(unsigned) << endl;
//	//cout << "最大值：" << (numeric_limits<unsigned>::max)();
//	//cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
//	//cout << "long: \t\t\t" << "字节数：" << sizeof(long) << endl;
//	//cout << "最大值：" << (numeric_limits<long>::max)();
//	//cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
//	//cout << "unsigned long: \t\t" << "字节数：" << sizeof(unsigned long) << endl;
//	//cout << "最大值：" << (numeric_limits<unsigned long>::max)();
//	//cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
//	//cout << "long long: \t\t" << "字节数：" << sizeof(long long) << endl;
//	//cout << "最大值：" << (numeric_limits<long long>::max)();
//	//cout << "\t\t最小值：" << (numeric_limits<long long>::min)() << endl;
//	//cout << "unsigned long long: \t" << "字节数：" << sizeof(unsigned long long) << endl;
//	//cout << "最大值：" << (numeric_limits<unsigned long long>::max)();
//	//cout << "\t\t最小值：" << (numeric_limits<unsigned long long>::min)() << endl;
//	//cout << "double: \t\t" << "字节数：" << sizeof(double) << endl;
//	//cout << "最大值：" << (numeric_limits<double>::max)();
//	//cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
//	//cout << "long double: \t\t" << "字节数：" << sizeof(long double) << endl;
//	//cout << "最大值：" << (numeric_limits<long double>::max)();
//	//cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
//	//cout << "float: \t\t\t" << "字节数：" << sizeof(float) << endl;
//	//cout << "最大值：" << (numeric_limits<float>::max)();
//	//cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
//	return 0;
//}
//
//
////#include<iostream>
////#include<string>
////#include<algorithm>
////using namespace std;
////string t1[127], t2[127];// 假设最多七层
////void build(string t[],string a,int i) {
////	if (a == "") return;
////	t[i] = a;
////	if (a.length() == 1) return;
////	int l = a.length() / 2;// 左子树字符个数 
////	int r = a.length() - l;
////	build(t, a.substr(0, l), i * 2 + 1);
////	build(t, a.substr(l, r), i * 2 + 2);
////}
////bool is(int root) {
////	if (t1[root] == t2[root]) return 1;
////	int l = root * 2 + 1, r = root * 2 + 2;
////	if (t1[l].length() > 1 && t1[r].length() > 1) {
////		string s1 = t1[root], s2 = t2[root];
////		sort(s1.begin(), s1.end());
////		sort(s2.begin(), s2.end());
////		if (s1 == s2) return is(l) && is(r);
////		else return 0;
////	}
////	return 0;
////}
////int main() {
////	string a, b;
////	cin >> a >> b;
////	if (a.length() != b.length()) { cout << 0; return 0; }
////	build(t1, a, 0);
////	build(t2, b, 0);
////	cout << is(0);
////	return 0;
////}