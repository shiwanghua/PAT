    #include<iostream>
    using namespace std;

    int main()
    {
    string in;
    int n;
    cin>>n;
    int len;
        int pi;//  字符p的位置  从1开始
        int ai;
        int ti;
        int i;

        int pn;//  number of 'p'
        int tn;
        int an; // a必须有至少一个

        char p = 'P';
        char a= 'A';
        char t='T';

        bool res;

        while(n--)
        {
            cin>>in;
            len=in.length();
            i=0;
            res=true;
            pn=0;
            tn=0;
            an=0;

            while(i<len)
            {
                if(in[i]==p)
                {
                    // cout<<"1";
                    pi=i+1;
                    pn++;
                }
                else if(in[i]==t)
                {
                    ti=i+1;
                    tn++;
                }
                else if(in[i]==a)
                {
                    an++;
                }
                else{
                    res=false;
                }
                i++;
            }

            if(res)
            {
                if(pn==1&&tn==1&&an>0)
                {
                    // cout<<"@22";
                    if((len-ti-pi+1)==((pi-1)*(ti-pi-2)))
                    {
                        cout<<"YES\n";
                        continue;
                    }
                }

            }
            cout<<"NO\n";
        }

        return 0;
    }




    /*#include<stdio.h>
    #include<string.h>

    int main(){
        int n,i,j;
        int cntp=0,cntt=0,cnta=0,flag=1;
        char s[101];

        char *p1,*p2;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%s",s);
            for(j=0;s[j]!='\0';j++)
            {
                if(s[j]=='P') cntp++;
                else if(s[j]=='A') cnta++;
                else if(s[j]=='T') cntt++;
                else  {flag=2;   break;}
            }
            if(flag==1&&cntp==1&&cntt==1&&cnta!=0)
            {
                p1=strchr(s,'P');
                p2=strchr(s,'T');
                if((s-p1)*(p2-p1-1)==strlen(p2)-1)
                    flag=0;
            }
            if(flag==0) printf("YES\n");
            else  printf("NO\n");
        }

        return 0;
    } */