#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// class student{
//     private:
//     int roll;

//     public:
//     virtual void foo() = 0;
// };

// class person: public student
// {
//     private:
//     string name;
//     public:
//     void foo(){
//         cout<<"this is the person class"<<endl;
//     }
//     // person(){
//     //     cout<<" this is the person class"<<endl;
//     // }
// };


 int minFlipsMonoIncr(string s) {
         int n = s.size();
        int cnt0 = 0 , cnt1 = 0 , val = 0 , i;
        int ans = INT_MAX;
        for(i=0; i<n; i++){
            if(s[i] == '0'){cnt0++;}
            else{val++;}
        }
        ans = min(ans , cnt0);
        ans = min(ans , val);
        for(i=0; i<n; i++){
            if(s[i] == '1'){
                cnt1++; 
            }else{
    

                cnt0--; 
            }
            ans = min(ans , cnt0 + cnt1);
        }
        return ans;
        
    }

int main()
{

    person p1;
    p1.foo();
    return 0;
}