//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//class Solution {
//public:
//    // string d(string& s,int i){
//    //     if(i>=s.length()) return "";
//    //     int j=i;
//    //     while(isdigit(s[j])) j++;
//    //     int c=stoi(s.substr(i,j-i));
//    //     string ans="";
//
//    // }
//    string decodeString(string s) {
//        stack<string> st;
//        int i = 0;
//        if (s == "") return s;
//        while (i < s.length()) {
//            if (isdigit(s[i])) {
//                int j = i;
//                while (isdigit(s[j])) j++;
//                st.push(s.substr(i, j - i));
//                i = j;
//            }
//            else if (s[i] == '[')
//                st.push(to_string(s[i++]));
//            else if (isalpha(s[i])) {
//                int j = i;
//                while (isalpha(s[j])) j++;
//                if (st.size()) {
//                    string str = st.top();
//                    if (isalpha(str[0]) && str[0] != '[')
//                    {
//                        st.pop();
//                        str += s.substr(i, j - i);
//                        st.push(str);
//                    }
//                    else st.push(s.substr(i, j - i));
//                }
//                else st.push(s.substr(i, j - i));
//                i = j;
//            }
//            else if (s[i] == ']') {
//                string str = st.top();
//                st.pop();
//                st.pop();
//                string c = st.top();
//                st.pop();
//                string str2 = "";
//                for (int j = 0; j < stoi(c); j++) str2 += str;
//                if (st.size()) {
//                    str = st.top();
//                    if (isalpha(str[0]) && str[0] != '[')
//                    {
//                        st.pop();
//                        str += str2;
//                        st.push(str);
//                    }
//                    else st.push(str2);
//                }
//                else st.push(str2);
//                i++;
//            }
//        }
//        return st.top();
//    }
//};
//int main()
//{
//	int n;
//    Solution so;
//    cout << so.decodeString("3[z]2[2[y]pq4[2[jk]e1[f]]]ef");
//	return 0;
//}