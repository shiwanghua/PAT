#include<iostream>
#include<string>
#include<cstdio>
#include <iomanip>
#include <vector>
#include<cmath>
#include<map>
#include<algorithm>
#include<stdlib.h>

#include"test2.h"
//#include"test2.cpp"

#define _for(a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

//map<pair<int, int>, vector<string>> mpv;
//
//  从K位里生成含k个1的字符串的集合
//vector<string> SubsetCodeGeneration(int k, int K) {      
//	if (k == 0) return { string(K,'0') };
//	if (mpv.count(make_pair(k, K))) return mpv[make_pair(k, K)];
//	vector<string> strSet;
//	for (int i = k; i <= K; i++)  //  只有前 i 位有1且第 i 位必须是1
//	{
//		string highStr = string(K - i,'0') + "1";
//		  从前i-1位里生成含k-1个1的字符串的集合
//		vector<string> lowPart = SubsetCodeGeneration(k - 1, i - 1);    
//		mpv[make_pair(k - 1, i - 1)] = lowPart;
//		for (auto& item : lowPart)
//			strSet.push_back(highStr + item);
//	}
//	return strSet;
//}
//
//void CodeTransfer(vector<string> subset) {
//	int K = subset[0].size();
//	vector <vector<int>> set_subno(K);  // 第二层集合中存有哪些subno
//	for (int subno = 0; subno < subset.size(); subno++) {
//		for (int setno = 0; setno < subset[subno].size(); setno++) {
//			if (subset[subno][setno] == '1')
//				set_subno[K - 1 - setno].push_back(subno);
//		}
//	}  
//	cout << "\n\n  Machine Set:\n\n";
//	for (int s = 0; s < set_subno.size();s++) {
//		cout << "  Machine" << s << ": ";
//		for (auto& no : set_subno[s])
//			cout << no << " ";
//		cout << endl;
//	}
//	return;
//}
//



//
//int main()
//{
////	int k, K;
////	cout << "\n\n  k = ";
////	cin >> k;
////	cout << "  K = ";
////	cin >> K;
////	cout << "\n";
////	vector<string> subsetCode = SubsetCodeGeneration(k, K);
////	cout << "  subscription coding:\n\n";
////	for (int i=0;i< subsetCode.size();i++)
////		cout <<"  "<<i<<": "<< subsetCode[i] << endl;
////	CodeTransfer(subsetCode);
////	return 0;
////	
//
//	//print_2();
//	bank b;
//	b.pri();
//
////	/*cout << "type: \t\t\t" << "************size**************" << endl;
////	cout << "short: \t\t\t" << "字节数：" << sizeof(short) << endl;
////	cout << "最大值：" << (numeric_limits<short>::max)();
////	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
////	cout << "int: \t\t\t" << "字节数：" << sizeof(int) << endl;
////	cout << "最大值：" << (numeric_limits<int>::max)();
////	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
////	cout << "unsigned: \t\t" << "字节数：" << sizeof(unsigned) << endl;
////	cout << "最大值：" << (numeric_limits<unsigned>::max)();
////	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
////	cout << "long: \t\t\t" << "字节数：" << sizeof(long) << endl;
////	cout << "最大值：" << (numeric_limits<long>::max)();
////	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
////	cout << "unsigned long: \t\t" << "字节数：" << sizeof(unsigned long) << endl;
////	cout << "最大值：" << (numeric_limits<unsigned long>::max)();
////	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
////	cout << "long long: \t\t" << "字节数：" << sizeof(long long) << endl;
////	cout << "最大值：" << (numeric_limits<long long>::max)();
////	cout << "\t\t最小值：" << (numeric_limits<long long>::min)() << endl;
////	cout << "unsigned long long: \t" << "字节数：" << sizeof(unsigned long long) << endl;
////	cout << "最大值：" << (numeric_limits<unsigned long long>::max)();
////	cout << "\t\t最小值：" << (numeric_limits<unsigned long long>::min)() << endl;
////	cout << "double: \t\t" << "字节数：" << sizeof(double) << endl;
////	cout << "最大值：" << (numeric_limits<double>::max)();
////	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
////	cout << "long double: \t\t" << "字节数：" << sizeof(long double) << endl;
////	cout << "最大值：" << (numeric_limits<long double>::max)();
////	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
////	cout << "float: \t\t\t" << "字节数：" << sizeof(float) << endl;
////	cout << "最大值：" << (numeric_limits<float>::max)();
////	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;*/
////
//	return 0;
//}

int main()
{
    char* c, s[20];
    strcpy(c, "123");

    return 0;
}