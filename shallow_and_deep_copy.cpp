#include<iostream>
using namespace std;
// here we will implement the shallow copy and the deep copy
//lets implement the shallow copy and the deep copy 

class student{
    public:
    string name;
    int age;
    

    //setting the data
    student(string name , int age){
        this->name = name;
        this->age = age;
    }

    //copy constructor for the deep copy
    student(const student &other)
    {
        //here other is an object which is the original object and the data of this object will 
        // be copied to the current object;
        this->name = other.name;
        this->age = other.age;
    }

    //assignment operator
    student& operator=(const student &other)
    {
        if(this != &other){
            this->name = other.name;
            this->age = other.age;
        }
        return *this;
    }

    ~student()//destructor may not have the parameter
    {
        
    }

};


int main(){
    // int i;
    // int n = 10000000;
    // // int times = n/10;
    // int k = n/50;
    // for(i=0; i<=n; i++){
        
    //     if(i%k == 0 || i == n){
    //         system("CLS");
    //         cout<<i;
           
    //     }  
    // }
    // cout<<endl;
    //here the code for the deep copy 
    student s1("nishant" , 22);
    // student s2 = &s1;
    student s2 = s1;
    cout<<s1.name<<" "<<s1.age<<endl;
    cout<<s2.name<<" "<<s2.age<<endl;
    // cout<<s1<<endl;

    
}



// //below program is written by chatGPT and it is working fine 

// #include <iostream>
// #include <string>

// using namespace std;

// class Person
// {
// public:
//     string name;
//     int* age;

//     Person(string name, int age)
//     {
//         this->name = name;
//         this->age = new int;
//         *this->age = age;
//     }

//     // copy constructor for deep copy
//     Person(const Person& other)
//     {
//         name = other.name;
//         age = new int;
//         *age = *other.age;
//     }

//     // assignment operator for deep copy
//     Person& operator=(const Person& other)
//     {
//         if (this != &other)
//         {
//             name = other.name;
//             delete age;
//             age = new int;
//             *age = *other.age;
//         }

//         return *this;
//     }

//     ~Person()
//     {
//         delete age;
//     }
// };

// int main()
// {
//     Person p1("Alice", 30);

//     // deep copy: p2 is a new object with a new memory address, and all data fields are copied
//     Person p2 = p1;
//     cout << "p2.name: " << p2.name << endl; // prints "Alice"
//     cout << "p2.age: " << *p2.age << endl; // prints 30

//     *p2.age = 35;
//     cout << "p1.age: " << *p1.age << endl; // prints 30 (deep copy)

//     return 0;
// }