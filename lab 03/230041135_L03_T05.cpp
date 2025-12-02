#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    int n, count=0; cin >>n;

    string s; cin >>s; queue<int> sdnt;
    for(int i=0; i<n; i++) {int t; cin >>t; sdnt.push(t);}
    string d; cin >>d; queue<int> dish;
    for(int i=0; i<n; i++) {int t; cin >>t; dish.push(t);}

    while(1)
    {
        if(dish.front()==sdnt.front()) 
        {
            dish.pop(); 
            sdnt.pop();
            count=0;
        }
        else 
        {
            sdnt.push(sdnt.front()); 
            sdnt.pop();
            count++;
        }
        if(count==sdnt.size()) break;
    }
    cout <<count <<endl;

    return 0;
}
