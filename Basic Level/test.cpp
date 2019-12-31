#include <iostream>
using namespace std;

typedef struct node{
    int data;
    struct node* next;
}*HEAD;

void clean(HEAD h,int n)
{
    int* exist=new int[n+1];
    for(int i=0;i<n+1;i++)
    {
        exist[i]=0;
    }
    node* p=h;
    node* q=p->next;
    int d;
    while(q)
    {
        d=q->data;
        if(d<0) d=-d;
        if(exist[d]==0)
        {
            exist[d]=1;
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }

}
int main() {
    node* head=new node;
    node* e=head;
    int m,n;
    cout<<"个数= ";cin>>m;
    cout<<"范围= ";cin>>n;
    cout<<"输入"<<m<<"个数：";
    for(int i=0;i<m;i++)
    {
        e->next=new node;
        e=e->next;
        cin>>e->data;
        e->next=NULL;
    } 
    e=head;
      for(int i=0;i<m;i++)
    {
        e=e->next;
        cout<<i+1<<": "<<e->data<<endl;
    }
    clean(head,n);
    e=head;
    for(int i=0;i<m;i++)
    {
        e=e->next;
        cout<<i+1<<": "<<e->data<<endl;
    }

    return 0;    
}