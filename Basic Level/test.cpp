#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;
bool cmp(char a, char b) {return a > b;}
int main()
{
   string s;
    cin >> s;
    s.insert(0, 2, '9');
    cout<<s<<endl;
    // sort(s);
    cout<<s;
    // do {
    //     string a = s, b = s;
    //     sort(a.begin(), a.end(), cmp);
    //     sort(b.begin(), b.end());
    //     int result = stoi(a) - stoi(b);
    //     s = to_string(result);
    //     s.insert(0, 4 - s.length(), '0');
    //     cout << a << " - " << b << " = " << s << endl;
    // } while (s != "6174" && s != "0000");
    return 0;
}

