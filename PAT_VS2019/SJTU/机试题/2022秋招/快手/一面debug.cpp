
#include <iostream>
#include <unordered_map>
#include <random>

using namespace std;

struct node{
    node* prev, *next;
    int pageNo;
    int pageContent;
};

class LRU{
public:
    node * head,*tail;
    unordered_map<int, node*> hash;
    int capacity;
    int size;
public:
    LRU(int c):capacity(c){
        head=new node;
        tail=head;
        head->next=nullptr;
        size=0;
    }

    ~LRU(){
        node* p;
        while(head){
            p=head;
            head=head->next;
            delete p;
        }
    }

    node* visit(int pageNo){
        if(hash.count(pageNo)){
            // move to head
            node* res = hash[pageNo];
            if(res==tail){
                tail=tail->prev;
            }
            res->prev->next = res->next;
			if(res->next)
            	res->next->prev = res->prev; // 1. 这句少了判空
            res->next=head->next;
			head->next->prev=res; // 2. 少了这句
            res->prev=head;
            head->next=res;
            return res;
        }
        else{ // page miss
            if(capacity==size){
                // move the last out
                // cout<<size<<", "<<tail->pageNo<<"\n";
                int lastPageNo = tail->pageNo;
                node* last = tail;
                tail=tail->prev;
                tail->next=nullptr;
                hash.erase(lastPageNo);
                // delete last;
                size--;
            }
            // insert to head
            node* page = new node;
            // read page from main memory to init the content of node
            page->pageContent = rand();
            page->pageNo=pageNo;

            page->next=head->next;
            if(page->next)
                page->next->prev=page; // *
            page->prev=head;
            head->next=page;

            if(size==0){
                tail=page;
            }
            size++;
            hash[pageNo]=page;
            return page;
        }
    }
};


int main() {
    LRU lru(3);
    node* p;
    p=lru.visit(100);
    cout<<"pageNo"<<100<<" content: "<<p->pageContent<<"\n";
    p=lru.visit(123);
    cout<<"pageNo"<<123<<" content: "<<p->pageContent<<"\n";
    p=lru.visit(4321);
    cout<<"pageNo"<<4321<<" content: "<<p->pageContent<<"\n";
    p=lru.visit(222);
    cout<<"pageNo"<<222<<" content: "<<p->pageContent<<"\n";

    p=lru.visit(4321);
    cout<<"pageNo"<<4321<<" content: "<<p->pageContent<<"\n";
    // cout<<lru.tail->pageNo<<"\n";
    // cout<<lru.tail->prev->pageNo<<"\n";
    p=lru.visit(100);
    cout<<"pageNo"<<100<<" content: "<<p->pageContent<<"\n";
    p=lru.visit(123);
    cout<<"pageNo"<<123<<" content: "<<p->pageContent<<"\n";

    cout<<lru.tail->pageNo<<", "<<lru.tail->prev->pageNo<<"\n";
    return 0;
}