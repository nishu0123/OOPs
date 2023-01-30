#include<bits/stdc++.h>
using namespace std;
// #include<iostream>
//trying to implement the friend function 
//now we have implemented the friend fucntion .


class base{
    private:
    int a;
    public:
    base()
    {
        cout<<"constructor of the base class is called \n";
        cout<<"enter the value of a \n";
        cin>>a;
    }
    virtual void fun()
    {
        cout<<"this is the fucntion of the base class\n";
    }
    //passing the class name as a parameter to the friend function 
    friend  void solve(base);

};
//friend fucntion definition 
//let se what we can acess from the class of which we are friend 
// now friend fucntion is working 
void solve( base obj1)
{
    cout<<"this is the friend fucntion \n";
    cout<<"value of a of base class (private data of base class which we are accessing from the friend fucntion ) is :- "<<obj1.a<<endl;
}


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
int main()
{
    base obj1;
    solve(obj1);
    return 0;
}
