#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class H1{
    int x = 2.5;
};

class H2{
    static H1 h;
    public:
    H2(){
        cout<<"h2 have a variable h "<<endl;
    }

    static H1 printH(){
        cout<<"h have a variable x "<<endl;
        return h;
    }

};

H1 H2::h;





int main(){
    H2 d1 , d2;
    H1 h = H2::printH();
    H1 g = H2::printH();
    return 0;
}

// after removing the static keyword it will still work

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class H1{
//     int x = 2.5;
// };

// class H2{
//     H1 h;
//     public:
//     H2(){
//         cout<<"h2 have a variable h "<<endl;
//     }

//      H1 printH(){
//         cout<<"h have a variable x "<<endl;
//         return h;
//     }

// };

// // H1 H2::h;





// int main(){
//     H2 d1 , d2;
//     H1 h = d2.printH();
//     H1 g = d1.printH();
//     return 0;
// }