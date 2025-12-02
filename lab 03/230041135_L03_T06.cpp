#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
    string str; cin >>str;
    int len=str.size(), mode=1;
    deque<char> deq, home; 
    for(int i=0; i<len; i++)
    {
        char temp=str[i];
        if(temp=='[') mode=0;
        else if(temp==']') mode=1;

        else if(mode==1) 
        {
            if(!home.empty())
            {
                while(!home.empty()) 
                {
                    deq.push_front(home.back());
                    home.pop_back();
                }
            }
            deq.push_back(temp);
        }
        else if(mode==0) home.push_back(temp);   
          
    }

    if(!home.empty())
    {
        while(!home.empty()) 
        {
            deq.push_front(home.back());
            home.pop_back();
        }
    }

    while(deq.size())
    {
        char temp=deq.front();
        deq.pop_front();
        cout <<temp;
    }
    cout <<endl;

    return 0;
}