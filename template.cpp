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
// now sum will work for all the possible data type
 template <typename T>
 T sum(const T a, const T b) {
 return a + b;
 }
 int main()
 {
    cout<<sum(2 ,3)<<endl;
    cout<<sum(2.6 ,33.3)<<endl;
    return 0;
 }