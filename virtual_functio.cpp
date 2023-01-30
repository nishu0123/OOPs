#include<bits/stdc++.h>
using namespace std;
#include<iostream>

class base{
    private:
    int a;
    public:
    virtual  void fun()
    {
        cout<<"this is the fucntion of the base class\n";
    }

};


class derived : public base
{
     private:
    int b;
    public:
    void fun()
    {
        cout<<"this is the fucntion of the derived class\n";
    }

};

int main(){


    base obj1;
    derived obj2;
    obj1.fun();
    obj2.fun();
    base *ptr = &obj2;
    ptr->fun();

    return 0;
}