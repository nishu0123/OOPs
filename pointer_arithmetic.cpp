
#include<bits/stdc++.h>
using namespace std;
#include<iostream>

int main()
{
    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;
    cout<<"lets print the adress of the pointer\n";
    cout<<p<<" "<<q<<" "<<r<<endl;
    cout<<"lets print the value \n";
    //so pointer store the adress and it will print what it is stored at the adress it is pointing to .
    cout<<*p<<" "<<*q<<" "<<*r<<endl;
    return 0;
}