//#include<iostream>
//#include<string>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//typedef long long ll;
//
//struct frac {
//	ll mu, zi;
//};
//int g(int a, int b)
//{
//	if (b == 0) return a;   //  abs(a)
//	return g(b, a % b);
//}
//int main()
//{
//	int n; cin >> n; 
//	frac sum, t;
//	sum.mu = 1; sum.zi = 0;
//	while (n--)
//	{
//		scanf("%lld/%lld", &t.zi, &t.mu);
//		sum.zi = sum.zi * t.mu + sum.mu * t.zi;
//		sum.mu = sum.mu * t.mu;
//		//���ÿ�����벻���л���Լȥ���������������ͳһ������һ������ͨ������ԭ�����������Ƿ�ĸ�����˷�Χ
//		if (sum.zi != 0) {
//			ll d = g(sum.mu, sum.zi);
//			sum.zi = sum.zi / d;
//			sum.mu = sum.mu / d;
//		}
//	}
//		if (sum.mu < 0)
//		{
//			sum.mu = -sum.mu;
//			sum.zi = -sum.zi;
//		}
//		if (sum.zi == 0) {
//			cout << 0;
//			return 0;
//		}
//		else {
//			ll d = g(sum.mu, sum.zi);
//			sum.zi = sum.zi / d;
//			sum.mu = sum.mu / d;
//		}
//		if (sum.mu == 1) cout << sum.zi << endl;
//		else if (abs(sum.zi) > sum.mu)cout << sum.zi / sum.mu << " " << abs(sum.zi) % sum.mu << "/" << sum.mu << endl;  //  �Ӿ���ֵ����Ϊǰ���Ѿ�����˷��ţ�����������û�м�����
//		else cout << sum.zi << "/" << sum.mu << endl;
//	return 0;
//}