#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	stringstream ss;
	string s;
	cin >> s;
	ss << s.substr(3);
	int v;
	ss >> v;
	cout << v<<endl;
	return 0;
}