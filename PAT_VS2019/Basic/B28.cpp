//#include<iostream>
//
//using namespace std;
// 
//#define _for(a,b,c) for(int a=b;a<c;a++)
//
//int mainB28()
//{
//    int n,v=0; cin >> n;
//    string name, bir, minName, right = "2014/09/06", maxName, left = "1814/09/06", minBir="1814/09/06", maxBir="2014/09/06";
//    _for(i, 0, n)
//    {
//        cin >> name >> bir;
//        if (right >= bir && bir >= left)
//        {
//            v++;
//            if (bir > minBir) {
//                minBir = bir; minName = name;
//            }
//            if (bir < maxBir) {
//                maxBir = bir;
//                maxName = name;
//            }
//        }
//    }
//    cout << v;
//    if (v > 0) cout << " " << maxName << " " << minName;
//
//    return 0;
//}
