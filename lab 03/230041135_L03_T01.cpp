#include<iostream>
using namespace std;

int que[99], frontIndex=-1, rearIndex=-1, maxSize;

int isEmpty() {return (frontIndex==-1&&rearIndex==-1);}
int isFull() {return ((rearIndex+1)%maxSize==frontIndex);}

void EnQueue(int n)
{
    if(!isFull())
    {
        if(isEmpty()) frontIndex=rearIndex=0;
        else rearIndex=(rearIndex+1)%maxSize;
        que[rearIndex]=n;
    }
}

void DeQueue()
{
    if(!isEmpty())
    {
        if(frontIndex==rearIndex) frontIndex=rearIndex=-1;
        else frontIndex=(frontIndex+1)%maxSize;
    }
}

void size()
{
    cout <<"Size: ";
    if(isEmpty()) cout <<"0";
    else if(isFull()) cout <<maxSize;
    else if(rearIndex>=frontIndex) cout <<rearIndex-frontIndex+1;
    else cout <<maxSize-frontIndex+rearIndex+1;
    cout <<endl;
}

void front()
{
    cout <<"Front: ";
    if(!isEmpty()) cout <<que[frontIndex];
    cout <<endl;
}

void printQueue()
{
    if(isEmpty()) cout <<"Empty Queue" <<endl;
    else
    {
        int i=frontIndex;
        while(i!=rearIndex)
        {
            cout <<que[i] <<" ";
            i=(i+1)%maxSize;
        }
        cout <<que[rearIndex] <<endl;
    }
}

int main()
{   
    cin >>maxSize;
    while(1)
    {
        int choice; cin >>choice;
        if(choice==-1)
        {
            cout <<"Exit" <<endl;
            break;
        }
        else if(choice==1)
        {
            int data; cin >>data;
            cout <<"EnQueue: ";
            if(isFull()) cout <<"Overflow" <<endl;
            else
            {
                EnQueue(data);
                printQueue();
            }
        }
        else if(choice==2)
        {
            cout <<"DeQueue: ";
            if(isEmpty()) cout <<"Underflow" <<endl;
            else 
            {
                DeQueue();
                printQueue();
            }
        }
        else if(choice==3)
        {
            cout <<"isEmpty: ";
            if(isEmpty()) cout <<"True";
            else cout <<"False";
            cout <<endl;
        }
        else if(choice==4)
        {
            cout <<"isFull: ";
            if(isFull()) cout <<"True";
            else cout <<"False";
            cout <<endl;
        } 
        else if(choice==5) size();
        else if(choice==6) front();
    }

    return 0;
}