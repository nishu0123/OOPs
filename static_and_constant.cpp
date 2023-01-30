// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
static int *ptr;
int *p;
//in this code we will demonstrate the const and the static keyword
void solve()
{
    static int z = 89;
    int val = 234;
    p = &val;
    ptr = &z;
}
int main()
{
    solve();
    const int x = 5;
    static int y = 6;

    //we can change the value of the static varible (it act as a global variable its life is throughout the program)
    y = x + y;
    // x = x + y;//this line gives error because we can not change the value of the const variable

    //
    cout<<x<<" "<<y<<endl;
    // with the help of the pointer we are acessing the value of z even the solve() function has been terminated 

    cout<<*ptr<<endl;
    // cout<<z<<endl;

    int i = 123;
    while(i--){
         cout<<*p<<endl;
        solve();
        cout<<*p<<endl;
        cout<<"---------------"<<endl;
    }
    return 0;
}