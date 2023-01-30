#include<bits/stdc++.h>
using namespace std;
#include<iostream>

// lets make the base and the derived class again
class base{
    private:
    static int cnt;
    int data;
    public:
    static void setdata(int val)
    {
        cnt = val;
        // data = val; //it will give error beacuse static fucntion can only acees the acess static member variable .
    }

    static void getdata()
    {
        cout<<"value of the static varible count is :- "<<cnt<<endl;
    } 

    // non-static data member can acess static as well as the non-static data member .
    void print()
    {
        cout<<"this is the print function of the base class \n";
        cout<<"value stored in the static data memeber :- "<<cnt<<endl;
        cout<<"value stored in the non-static data member :- "<<data<<endl;
    }
}; 

int base::cnt = 0;//initialization of the static data member ;


//we can do the virtual inheritance also
class derived :virtual  public base
{
    private:
    int data;
    static int val;
    public:
    void static print_static_data()
    {
        cout<<"static variable in the derived class is the static data memeber \n";
        cout<<val<<endl;
    }
    //print function is both in the base and the derived class .
    virtual void print()
    {
        cout<<"this is the print function of the derived class \n";
        cout<<"value stored in the static data memeber :- "<<val<<endl;
        cout<<"value stored in the non-static data member :- "<<data<<endl;
    }
};

//let initialize the data of the static data member of the derived class 
int derived::val = 0;
int main()
{
    // base obj1 , obj2;;
    // cout<<"we have created the two object \n";
    // obj1.setdata(5);
    // obj1.getdata();
    // obj2.getdata();
    // obj1.print();
    derived objd1;
    base *ptr = &objd1;
    // objd1.print();
    ptr->print();
    return 0;
}

// class base
// {
//     private:
//     static int  count;
//     int data;

//     public:
//     static void setvalue(int val){
//         count = val;
//     }
//     static void solve()
//     {
//         // data = 0; //static function cannot acess the non-static data members 
//         count++;//increasing the value of the count
//         cout<<"value of the count is :- "<<count<<endl;
//     }

//     void setData(int val)
//     {
//         data = val;
//     }

//     void getData()
//     {
//         cout<<"value of the data variable is :- "<<data<<endl;
//     }
// };

// int base::count= 0;

// int main()
// {
//     base obj1 , obj2;
//     obj1.setData(5);
//     obj1.getData();
//     obj1.setvalue(5);
//     obj1.solve();
//     obj2.setvalue(45);
//     obj1.solve();
//     return 0;
// }