//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//bool cmp1(char a, char b)
//{
//	return a < b;
//}
//bool cmp2(char a, char b)
//{
//	return a > b;
//}
//int main()
//{
//	char n[5]; 
//	// scanf("%s", n);  // Bug1: 输入不一定是四位数
//	n[4] = '\0';
//	int number; cin >> number;
//	for (int i=3;i>=0;i--)
//	{
//		n[i] = number % 10+'0';   //  Bug2: 没有加‘0'
//		number = number / 10;
//	}
//	if (n[0] == n[1] && n[0] == n[2] && n[0] == n[3])
//	{
//		cout << n << " - " << n << " = 0000";
//		return 0;
//	}
//	int max, min;
//	do {
//		sort(n, n + 4,cmp1);
//		min = atoi(n);       //    Bug3: stoi是string转int，atoi是char数组转int
//		sort(n, n + 4, cmp2);
//		max = atoi(n);
//		snprintf(n, sizeof(n), "%04d", max - min);   //  将数字转char数组
//		//_itoa(max - min, n, 10);                            //  将数字转char数组,PAT没有
//		printf("%04d - %04d = %04d\n",max,min,max-min);
//	} while (atoi(n) != 6174&&atoi(n)!=0);
//	return 0;
//}