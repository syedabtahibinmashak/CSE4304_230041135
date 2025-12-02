#include<iostream>
using namespace std;

int deq[99], frontIndex=-1, rearIndex=-1, maxSize=99;

int isEmpty() {return (frontIndex==-1&&rearIndex==-1);}
int isFull() {return ((rearIndex+1)%maxSize==frontIndex);}

void printDeq()
{
    if(isEmpty()) cout <<"Empty Queue" <<endl;
    else
    {
        int i=frontIndex;
        while(i!=rearIndex)
        {
            cout <<deq[i] <<" ";
            i=(i+1)%maxSize;
        }
        cout <<deq[rearIndex] <<endl;
    }
}

void push_front(int key)
{
    if(isFull()) cout <<"Overflow" <<endl;
    else
    {
        if(isEmpty()) frontIndex=rearIndex=0;
        else if(frontIndex==0) frontIndex=maxSize-1;
        else frontIndex--; 
        deq[frontIndex]=key;
        printDeq();
    }
} 
void push_back(int key)
{
    if(isFull()) cout <<"Overflow" <<endl;
    else
    {
        if(isEmpty()) frontIndex=rearIndex=0;
        else rearIndex=(rearIndex+1)%maxSize;
        deq[rearIndex]=key;
        printDeq();
    }
}   
int pop_front()
{
    if(isEmpty()) cout <<"Underflow" <<endl;
    else 
    {
        if(frontIndex==rearIndex) frontIndex=rearIndex=-1;
        else frontIndex=(frontIndex+1)%maxSize;
        printDeq();
    }
}   
int pop_back() 
{
    if(isEmpty()) cout <<"Underflow" <<endl;
    else
    {
        if(frontIndex==rearIndex) frontIndex=rearIndex=-1;
        else if(rearIndex==0) rearIndex=maxSize-1;
        else rearIndex--;
        printDeq();
    } 
}  
int size()
{
    if(isEmpty()) return 0;
    else if(isFull()) return maxSize;
    else if(rearIndex>=frontIndex) return rearIndex-frontIndex+1;
    else return maxSize-frontIndex+rearIndex+1;
} 

int main()
{
    while(1)
    {
        int choice; cin >>choice;
        if(choice==6)
        {
            cout <<"Exit" <<endl;
            break;
        }
        else if(choice==1)
        {
            int data; cin >>data;
            push_front(data);
        }
        else if(choice==2)
        {
            int data; cin >>data;
            push_back(data);
        }
        else if(choice==3) pop_front();
        else if(choice==4) pop_back();
        else if(choice==5) cout <<size() <<endl;
    }
    return 0;
}