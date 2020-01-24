#include<iostream>
#include<string>
#include <iomanip>
#include <math>
#include<algorithm>

#define _for(a,b) for( int i=a; i<b; ++i)
using namespace std;
bool isP(int a)
{
	int s = (int)sqrt(1.0*a);
	for (int i = 2; i < s; i++)
		if (a % i == 0) return false;
	return true;
}
int main()
{
	int n, r; cin >> n;
	int a[30] = { 0 };
	while (n > 0)
	{
		cin >> r;
		if (!isP(n)) cout << "No\n";
		int i = 0;
		do {
			a[i++] = n % r;
			n = n / r;
		} while (n > 0);
		for (int j = 0; j < i; j++)
			n = n * r + a[j];
		if (isP(n)) cout << "Yes\n";
		cin >> n;
	}
	return 0;
}