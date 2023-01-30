#include<bits/stdc++.h>
using namespace std;
class base{
    private:

    public:
    virtual void fun(){
        cout<<"this is the base class \n";
    }
    
};

class derived :public base
 {

    private:

    public:
    void fun(){
        cout<<"this is the derived class \n";
    }
    int fun(int a){
        cout<<
        return 0;
    }
};
int main(){
    base *ptr;
    derived obj1;
    ptr = &obj1;
    ptr->fun();
}







// #include<bits/stdc++.h>
// using namespace std;
// #include<iostream>

// class base{
//     private:
//     int a;
//     public:
//     void fun()
//     {
//         cout<<"this is the fucntion of the base class\n";
//     }

// };


// class derived : public base
// {
//      private:
//     int b;
//     public:
//     void fun()
//     {
//         cout<<"this is the fucntion of the derived class\n";
//     }

// };

// int main(){


//     base obj1;
//     derived obj2;
    

//     return 0;
// }