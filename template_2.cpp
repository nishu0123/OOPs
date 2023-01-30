#include<iostream>
using namespace std;

// int sum(int a,int b)
// {
//     return a+ b;
// }

// double sum(double a,double b)
// {
//     return a+ b;
// }

// long  sum(long  a,long  b)
// {
//     return a+ b;
// }
// now sum will work for all the possible data type where T1 , T2 can be same as wll as different data types.
 template <typename T1 , typename T2>
 T1 sum(const T1 a, const T2 b) {
 return a + b;
 }
 int main()
 {
    cout<<sum(2 ,3)<<endl;
    cout<<sum(2.6 ,33)<<endl;
    return 0;
 }