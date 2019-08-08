#include<iostream>
using namespace std;
int cmp(char a,char b)  //  输出1代表a大于b，输出-1代表a<b
{
    if(a==b) return 0;
    else if(a-b<0&&b-a!=8 || a-b==8) return 1;
    else return -1;
}
int main()
{
    int n;
    cin>>n;
    int jia_win=0;
    int jia_ping=0;
    char a,b;
    int jia_b_win=0,jia_c_win=0,jia_j_win=0;
    int yi_b_win=0,yi_c_win=0,yi_j_win=0;
    int t=n;
    while(t--)
    {
        cin>>a>>b;
        if(cmp(a,b)==1)
        {
            jia_win++;
            if(a=='B')jia_b_win++;
            else if(a=='C') jia_c_win++;
            else jia_j_win++;
        }
        else if(cmp(a,b)==0)
        jia_ping++;
        else{
             if(a=='B')yi_j_win++;
            else if(a=='C') yi_b_win++;
            else yi_c_win++;
        }
    }
    cout<<jia_win<<" "<<jia_ping<<" "<<n-jia_win-jia_ping<<endl;
    cout<<n-jia_win-jia_ping<<" "<<jia_ping<<" "<<jia_win<<endl;

    if(jia_b_win>=jia_c_win && jia_b_win>=jia_j_win )
    cout<<"B ";
    else if(jia_c_win>jia_b_win && jia_c_win>=jia_j_win)
    cout<<"C ";
    else cout<<"J ";

     if(yi_b_win>=yi_c_win && yi_b_win>=yi_j_win )
    cout<<"B";
    else if(yi_c_win>yi_b_win && yi_c_win>=yi_j_win)
    cout<<"C";
    else cout<<"J";
    return 0;
}