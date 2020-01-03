#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(a,b) for( int i=a; i<b; ++i)
#define __for(a,b) for(int i=a; i<=b;++i)
#define mfor(a,b) for(int i=a;i>=b;--i)

using namespace std;

// 错因：把要输出错误身份证号看成输出正确的身份证号了
int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char z[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
	int n, pn=0, tw;
	cin >> n;
	string s , *ans = new string[n];
	_for(0, n)
	{
		cin>>s;
		tw = 0;
		for(int j=0;j< 17;j++)
		{
			if (s[j] >= '0' && s[j] <= '9')
				tw += w[j] * (s[j] - '0');
			else {
				ans[pn++] =s; break;
			}
			if (j == 16&& s[17] != z[tw % 11])
				ans[pn++] = s;
		}
	}

	if (pn == 0) cout << "All passed";
	else
		_for(0, pn)
			cout << ans[i] << endl;
	return 0;
}