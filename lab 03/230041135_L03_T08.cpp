#include<iostream>
#include<queue>
#include<string>
using namespace std;

void display(queue<int> x)
{
    while(x.size())
    {
        cout <<x.front() <<" ";
        x.pop();
    }
}

int main()
{
    int n; cin >>n; queue<int> que;
    for(int i=0; i<n; i++)
    {
        int t; cin >>t;
        que.push(t);
    }
    string str; cin >>str;

    while(que.size()>1)
    {
        if(!str.compare("Ishraq"))
        {
            que.push(que.front()); que.pop();
            que.push(que.front()); que.pop();
            que.pop();
            cout <<str <<" "; display(que); cout<<endl;
            str.clear(); str="Daiyan";
        }
        else if(!str.compare("Daiyan"))
        {
            que.push(que.front()); que.pop();
            que.pop();
            cout <<str <<" "; display(que); cout<<endl;
            str.clear(); str="Ishraq";
        }
    }

    return 0;
}