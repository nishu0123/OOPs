#include<bits/stdc++.h>
using namespace std;
class base{
    private:

    public:
    virtual void fun(){
        cout<<"this is the base class \n";
    }
    virtual void fun2(){
        cout<<"this is the base class\n";
    }
    virtual  void fun3(){
        cout<<"this is func3() of the base class \n";
    }
    
};

class derived :public base
 {

    private:

    public:
    void fun(){
        cout<<"this is the derived class \n";
    }
    int fun2(int a){
        // cout<<
        return 0;
    }

    void  fun3(int a){
        cout<<"this is the func3() of the derived class \n";
    }
   
};
int main(){
    
    derived obj1;

    obj1.fun3();
    // base *ptr;
    // ptr = &obj1;
    // ptr->fun3();
    // ptr->fun();
}
