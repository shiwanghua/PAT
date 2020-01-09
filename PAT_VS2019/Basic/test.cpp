#include<iostream>
#include<cstring>
#include<cstdio>
#include <iomanip>
#include <vector>
#include<sstream>
#include<algorithm>

#define _for(a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

bool com(int a, int b)
{
	return a >b;
}
int main()
{

	int a[5][5];
	int n = 1;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			a[i][j] = n++;
	int* q = a[0];
	cout << "q[0]= " << q[0] << ", q[3]= " << q[3] << endl << endl;

	int* p = *a+5;
	cout << "p[1]= " << p[1] << ", p[4]= " << p[4] << endl << endl;

	int b[6] = { 1,2,3,4,5,6 };
	int* w = b;
	cout << "w[5]= " << w[5] << endl << endl;

	int(*e)[5] = a;
	cout <<"e[4][3]= "<< e[4][3] << endl << endl;

	int* r = a;

	/*cout << "type: \t\t\t" << "************size**************" << endl;
	cout << "short: \t\t\t" << "字节数：" << sizeof(short) << endl;
	cout << "最大值：" << (numeric_limits<short>::max)();
	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t\t" << "字节数：" << sizeof(int) << endl;
	cout << "最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t\t" << "字节数：" << sizeof(unsigned) << endl;
	cout << "最大值：" << (numeric_limits<unsigned>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t\t" << "字节数：" << sizeof(long) << endl;
	cout << "最大值：" << (numeric_limits<long>::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t\t" << "字节数：" << sizeof(unsigned long) << endl;
	cout << "最大值：" << (numeric_limits<unsigned long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "long long: \t\t" << "字节数：" << sizeof(long long) << endl;
	cout << "最大值：" << (numeric_limits<long long>::max)();
	cout << "\t\t最小值：" << (numeric_limits<long long>::min)() << endl;
	cout << "unsigned long long: \t" << "字节数：" << sizeof(unsigned long long) << endl;
	cout << "最大值：" << (numeric_limits<unsigned long long>::max)();
	cout << "\t\t最小值：" << (numeric_limits<unsigned long long>::min)() << endl;
	cout << "double: \t\t" << "字节数：" << sizeof(double) << endl;
	cout << "最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t\t" << "字节数：" << sizeof(long double) << endl;
	cout << "最大值：" << (numeric_limits<long double>::max)();
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t\t" << "字节数：" << sizeof(float) << endl;
	cout << "最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;*/
	return 0;
}


   
