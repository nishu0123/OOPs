#include<iostream>
using namespace std;
// what is the dangling pointer 
int *solve()
{
    int x = 5;
    //returning the reference of the variable whose scope is inside this solve fucntion when this solve function gets 
    // terminated varibale x will also get deleted so the memory block to which the poiiinter is pinting will no longer in 
    // existance 
    return &x;
}
int main()
{
    int *ptr;
    if(true)
    {
        // x = new int(5);
       int y = 5; 
       int *x = new int();
       x = &y;
        ptr = &y;
        delete x;
        cout<<"value of x -> (inside the if condition ) "<<x<<endl;
    }
    
    cout<<" trying to acess the value of the x which was declared inside the if block using the pointer "<<*ptr<<endl;
    ptr = solve();//this function is returning the referance of the variable 
    // but before accessing this varible  , it has been deleted because 
    // fucntino have been terminated 
    
    cout<<*ptr<<endl;//here it will give the segmentation fault 
    // because the memory block i am trying to acees no longer exist 
    // as the function terminated variable also get deleted 


    /*for this i have tried but still it is giving the sementation fault */

    // one way to remove this by making the variable static because 
    // life of static variable is whole program 
    
    return 0;
}