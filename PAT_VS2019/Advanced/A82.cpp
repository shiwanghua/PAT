//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//using namespace std;
////char h[11][5] = { "Ling","Yi","Er","San","Si","Wu","Liu","Qi","Ba","Jiu" };
//char l[11][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//
//int Two(int n)
//{
//	cout << l[n / 10] << " Shi";
//	if (n % 10 == 0) return 0;
//	else cout << " " << l[n % 10];
//	return 0;
//}
//int Three(int n)
//{
//	cout << l[n / 100] << " Bai";
//	n = n % 100;
//	if (n == 0) return 0;
//	else
//	{
//		cout << " ";
//		if (n > 9) // 二位数
//		{
//			cout << l[n / 10] << " Shi";
//			if (n % 10 == 0) return 0;
//			else cout << " " << l[n % 10];
//		}
//		else  cout << l[0] <<" "<< l[n];
//	}
//}
//int Four(int n)
//{
//	cout << l[n / 1000] << " Qian";
//	n = n % 1000;
//	if (n == 0)return 0;
//	else cout << " ";
//
//    if (n > 99)
//		Three(n);
//	else   // n<=99
//	{
//		cout << l[0];
//		if (n > 9) Two(n);
//		else cout << l[n];
//	}
//}
//int Five(int n)
//{
//	cout << l[n / 10000] << " Wan";
//	n = n % 10000;
//	if (n == 0) return 0;
//	else cout << " ";
//
//	if (n > 999) Four(n);
//	else
//	{
//		cout << l[0] << " ";
//		if (n > 99) Three(n);
//		else if (n > 9) Two(n);
//		else cout << l[n];
//	}
//	return 0;
//}
//int Six(int n)
//{
//	Two(n / 10000); cout << " Wan";
//	n = n % 10000;
//	if (n == 0) return 0;
//	else cout << " ";
//
//	if (n > 999) Four(n);
//	else
//	{
//		cout << l[0] << " ";
//		if (n > 99) Three(n);
//		else if (n > 9) Two(n);
//		else cout << l[n];
//	}
//	return 0;
//}
//int Seven(int n)
//{
//	Three(n / 10000); cout << " Wan";
//	n = n % 10000;
//	if (n == 0) return 0;
//	else cout << " ";
//
//	if (n > 999) Four(n);
//	else
//	{
//		cout << l[0] << " ";
//		if (n > 99) Three(n);
//		else if (n > 9) Two(n);
//		else cout << l[n];
//	}
//	return 0;
//}
//int Eight(int n)
//{
//	Four(n / 10000); cout << " Wan";
//	n = n % 10000;
//	if (n == 0) return 0;
//	else cout << " ";
//
//	if (n > 999) Four(n);
//	else
//	{
//		cout << l[0] << " ";
//		if (n > 99) Three(n);
//		else if (n > 9) Two(n);
//		else cout << l[n];
//	}
//	return 0;
//}
//int Nine(int n)
//{
//	cout << l[n / 100000000] << " Yi";
//	n = n % 100000000;
//	if (n == 0) return 0;
//	else cout << " ";
//
//	if (n >= 10000000) Eight(n);
//	else
//	{
//		cout << l[0] << " ";
//		if (n >= 1000000) Seven(n);
//		else if (n >= 100000) Six(n);
//		else if (n >= 10000) Five(n);
//		else if (n >= 1000) Four;
//		else if(n >= 100) Three(n);
//		else if (n >= 10) Two(n);
//		else cout << l[n];
//	}
//	return 0;
//}
//int main()
//{
//	int n; cin >> n;
//	if (n < 0)
//	{
//		cout << "Fu ";
//		n = -n;
//	}
//	if (n < 10) // 个位数
//	{
//		cout << l[n];
//		return 0;
//	}
//	else if (n < 100)  // 二位数
//		Two(n);
//	else if (n < 1000)//三位数
//		Three(n);
//	else if (n < 10000)// 四位数
//		Four(n);
//	else if (n < 100000) //五位数
//		Five(n);
//	else if (n < 1000000)  // 六位数
//		Six(n);
//	else if (n < 10000000) //七位数
//		Seven(n);
//	else if (n < 100000000) // 八位数
//		Eight(n);
//	else Nine(n);
//	return 0;
//}