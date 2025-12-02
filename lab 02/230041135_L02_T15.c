#include<stdio.h>

int stck[999], head=-1, n;

int isFull() {return head+1==n;} 
int isEmpty() {return head==-1;}
void push(int x) {head++; stck[head]=x;} 
void pop() {head--;} 
int top() {return stck[head];}
int size() {return head+1;}
void print() {for(int i=0; i<size(); i++) printf("%d ",stck[i]);}

int main()
{
    scanf("%d",&n);
    char ins;
    while (1)
    {
        scanf(" %c",&ins);
        if(ins=='+')
        {
            int t; scanf(" %d",&t); 
            if(isFull()) printf("Overflow !!!\n");
            else push(t);
        }
        else if(ins=='-')
        {
            if(isEmpty()) printf("Underflow !!!\n");
            else pop();
        }
        else if(ins=='/') break;

        printf("Size : %d\n",size());
        printf("Stack elements : "); print();
        printf("\nTop Element : "); (head==-1?(printf("\n")):(printf("%d\n",top())));
        printf("isFull : "); if(isFull()) printf("True\n"); else printf("False\n");
        printf("isEmpty : "); if(isEmpty()) printf("True\n"); else printf("False\n");
    }

    return 0;
}