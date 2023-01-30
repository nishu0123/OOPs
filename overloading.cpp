#include<bits/stdc++.h>
using namespace std;
#include<iostream>
class base{
    private:
    int data = 0;

    public:
    base(){
        cout<<"contructor have been called \n";
    }
    ~base()
    {
        cout<<"desturctor has been calldes \n";
    }

    int sum(int a , int b)
    {
        return a + b;
    }
    int sum(vector<int>&num)
    {
        int i;
        int n = num.size();
        int ans = 0;
        for(i=0; i<n; i++)
        {
            ans += num[i];
        }
        return ans;
    }

};



int main()
{
    base obj1;
    vector<int> v = {1 , 3  ,56 , 7 };
    int a = 7;
    int b = 29;
    int ans = obj1.sum(a , b);
    cout<<"sum of a and b :- "<<ans<<endl;
    ans = obj1.sum(v);
    cout<<"sum of the element in the vector :- "<<ans<<endl;


    return  0;
}