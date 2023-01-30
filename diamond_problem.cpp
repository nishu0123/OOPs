#include<bits/stdc++.h>
using namespace std;
#include<iostream>

class person
{
    string name;
    public:
    person()
    {
        // cout<<"Enter the name of the person \n";
        // // cin>>name;
        // cout<<"name of the person is :- "<<name<<endl;
        cout<<"constructor of person is called \n"<<endl;
    }
    ~person()
    {
        cout<<"desstructor of person is called \n";
    }
};

//father ans mother both are inhereting the common pwerson class so we will make the virtual inheritance for person class 
// here see how we are doing the virtual inheritance .
class father :virtual public  person
{
    public:
    father(){
         cout<<"constructor of father is called \n"<<endl;
    }
     ~father()
    {
        cout<<"destructor of father is called \n";
    }
};

// to check the difference in the output just change mother class to the below line that add the virtual inheritance
// class mother : virtual public person

class mother :  public person
{
    public:
    mother(){
         cout<<"constructor of mother is called \n"<<endl;
    }
};

class child :   public father , mother
{
    public:
    child(){
         cout<<"constructor of child is called \n"<<endl;
    }

    ~child(){
        cout<<"destructor of child is called \n";
    }
};

int main()
{
    // person p1;
    // father f1;
    // mother m1;
    child c1;
    return 0;
}