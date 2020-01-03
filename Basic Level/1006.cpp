#include<iostream>
#include<string>

using namespace std;
int main()
{
    int in; 
    int gn;
    int sn;
    int bn;
    string out;

    cin>>in;
    bn=in/100;
    sn=(in/10)%10;
    gn=in%10;
    out="";

    for(int i=0;i<bn;i++)
    out+="B";
    for(int i=0;i<sn;i++)
    out+="S";
    for(int i=1;i<=gn;i++)
    out+=to_string(i);
    cout<<out;
    return 0;
}