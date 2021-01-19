//#pragma once
//#include<iostream>
//using namespace std;
//
//class bank {
//public:
//	void pri();
//};
//
////inline int print_2() {
////	cout << "a";
////	return 0;
////}


#ifndef CLASS_H
#define CLASS_H

// Your code goes here.
#include<iostream>
using namespace std;
class pet {
public:
    const char* name;
    int age;
    pet(const char* a, int n) :name(a), age(n) {};
    virtual void print() {};
};

class dog : public pet {
    //使用继承构造函数
    using pet::pet;
    void print();
};

class cat : public pet {
    using pet::pet;
    void print();
};

#endif //CLASS_H
