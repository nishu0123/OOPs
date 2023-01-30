// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
//lets make this class abstract 

// so we can use the abstract keyword to make the class abstract for that we have to make the class 
// do-nothing  fucntion
 
// abstract class student

// if we want to make the student class as a abstract class then we have to define a do nothing function 
class student{
    private:
    int roll;
    string name;
    public:
    //this is the do nothing fucntion if do nothin fucntion is present in the class then object of that class can not be created
    // since after making do noting class in the student class it became abstract class we can use inheritance to acess its data member and fucnton
    virtual void fun() = 0;
    void print_abstract(){
        cout<<"this is the abstract class \n";
    }

};

// class student
// {
//     private:
//     int val;
//     public:
//     void print_abstract(){
//         cout<<"this is the abstract class \n";
//     }
// };

 class person : public student
{
    private:
    int data;
    public:
    person()
    {
        // cout<<"Enter the name of the person \n";
        // cin>>name;
        // cout<<"name of the person is :- "<<name<<endl;
        cout<<"constructor of person is called \n";
    }
    ~person()
    {
        cout<<"desstructor of person is called \n";
    }
};

//father ans mother both are inhereting the common pwerson class so we will make the virtual inheritance for person class 
// here see how we are doing the virtual inheritance .

class father :virtual  public  person
{
    private:
    int data;
    public:
    father(){
         cout<<"constructor of father is called \n";
    }
     ~father()
    {
        cout<<"destructor of father is called \n";
    }
};

class mother : public person
{
    private:
    int data;
    public:
    mother(){
         cout<<"constructor of mother is called \n";
    }
};

class child :   public father , mother
{
    public:
    child(){
         cout<<"constructor of child is called \n";
    }
};

int main()
{
    person p1;
    // father f1;
    // mother m1;
    // child c1;
    // cout<<"size of the object of the person class :- "<<sizeof(p1)<<endl;
    // cout<<"size of the object of the father class :- "<<sizeof(f1)<<endl;
    // cout<<"size of the object of the mother class :- "<<sizeof(m1)<<endl;
    // cout<<"size of the object of the child class :- "<<sizeof(c1)<<endl;
    p1.print_abstract();
    // cout<<f1.size()<<endl;
    return 0;
}