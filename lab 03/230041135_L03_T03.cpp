#include<iostream>
#include<stack>
using namespace std;

void printData(stack<int> st)
{
    cout <<"Size: " <<st.size() <<" Elements: ";
    if(st.empty()) cout <<"NULL" <<endl;
    else
    {
        stack<int> temp;
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty())
        {
            cout <<temp.top() <<" ";
            temp.pop();
        }
        cout <<endl;
    }    
}

int main()
{
    stack<int> st1,st2;

    int maxSize, t; cin >>maxSize >>t;
    for(int f=0; f<t; f++)
    {
        int choice; cin >>choice;
        
        if(choice==1)
        {   
            if(st1.size()==maxSize) cout <<"Size: " <<maxSize <<" Elements: Overflow!" <<endl;
            else
            {
                int data; cin >>data;
                st1.push(data);
                printData(st1);
            }
        }
        else if(choice==2)
        {
            if(st1.empty()) cout <<"Size: 0" <<" Elements: Overflow!" <<endl;
            else
            {
                while(st1.size())
                {
                    st2.push(st1.top());
                    st1.pop();
                } 
                st2.pop();
                while(st2.size())
                {
                    st1.push(st2.top());
                    st2.pop();
                } 
                printData(st1);
            }
        }
    }

    return 0;
}