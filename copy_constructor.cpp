#include<iostream>
using namespace std;

class base
{
    private:
    int a, b;
    public:
    base(int x , int y){
        a = x;
        b = y;
    }
    base(const base &obj1){
        a = obj1.a;
        b = obj1.b;
    }
//implementing the equal operator 
    void operator=(const base &obj)
    {
        a = obj.a;
        b = obj.b;
        // return *this;
    }
    void print(){
        // where we can use the this pointer?
        // cout<<this.a<<" "<<this.b<<endl;
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    base obj1(2 , 3);
    base obj2(obj1);//copy constructor (and this is the shallow copy)
    base obj3 = obj1;
    obj1.print();
    obj3.print();

    return 0;
}