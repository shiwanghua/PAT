#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string* name=new string[n];
    string* id=new string[n];
    int* mark=new int[n];

    int maxMark=-1;
    string maxName="";
    string maxId="";
    int minMark=1000;
    string minName="";
    string minId="";

    int i=0;
    while(i<n)
    {
        cin>>name[i];
        cin>>id[i];
        cin>>mark[i];
        if(mark[i]>maxMark)
        {
            maxMark=mark[i];
            maxName=name[i];
            maxId=id[i];
        }
        if(mark[i]<minMark)
        {
            minMark=mark[i];
            minName=name[i];
            minId=id[i];
        }
        i++;
    }
    cout<<maxName<<" "<<maxId<<endl;
    cout<<minName<<" "<<minId;


    return 0;
}