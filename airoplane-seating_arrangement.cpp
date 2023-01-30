#include<bits/stdc++.h>
using namespace std;

unordered_map<int , vector<vector<int > > >  takeInput()
{
    unordered_map<int , vector<vector<int>> >seat;
    
    int numberOfPassenger = 0;
    cout<<"Enter the number of passenger waiting in the queue\n";
    cin>>numberOfPassenger;
    cout<<"Enter the position of the passenger\n";
    vector<vector<int> >seat;
    int i;
    for(i=0; i<numberOfPassenger; i++)
    {
        int row , col;
        cin>>col>>row;
        vector<vector<int>>v(col , vector<int >(row , 0));
        seat[i+1] = v;
        // seat.push_back({row , col});
    }
    // return seat;
}
void allocateSeat(map<int , vector<vector<int>>>&seat , int passengerNo)
{
    
}
int main()
{
    //we have taken the input
    vector<pair<int , int > >seat = takeInput();

    return 0;
}