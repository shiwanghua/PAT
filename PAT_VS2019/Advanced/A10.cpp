//#include<iostream>
//#include<cstring>
//#include <algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//long long convert(string s, long long r)
//{
//	long long ans = 0, d, rr=1;
//	for (int i = s.length() -1; i >= 0; i--)
//	{
//		if (isalpha(s[i]))
//			d = s[i] - 'a' + 10;
//		else d = s[i] - '0';
//		ans += d * rr;
//		rr = rr * r;  //  Bug2: 本来是直接r=r*r;
//	}
//	return ans;
//}
//int main()
//{
//	string n1, n2, n;
//	long long tag, radix, t, tn2;
//	cin >> n1 >> n2 >> tag >> radix;
//	if (tag == 2)
//	{
//		n= n1;
//		n1 = n2;
//		n2 = n;
//	}
//	t = convert(n1, radix);
//	
//	long long minRadix = 1, temp;  //  Bug3:  初值不能是2，后面会++
//	for (int i = 0; i < n2.length(); i++)
//	{
//		if (isalpha(n2[i]))
//			temp = n2[i] - 'a' + 10;
//		else temp = n2[i] - '0';
//		if (temp > minRadix)
//			minRadix = temp;
//	}
//	minRadix++;
//	long long low = minRadix, high = max(minRadix, t) + 1;   // Bug1: high不是37！！！
//	while(low<=high)
//	{
//		long long mid = (low + high) / 2;
//		tn2 = convert(n2,mid);
//		if (tn2 == t)
//		{
//			cout << mid;
//			return 0;
//		}
//		else if (tn2 > 0 && tn2 < t)low = mid + 1;
//		else high = mid - 1;
//	}
//	cout << "Impossible";
//	return 0;
//}