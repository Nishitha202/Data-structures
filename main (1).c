

#include <stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top=-1;
void push(void);
void pop(void);
void display(void);
void main()
{
int choice;
while(1)
{
    printf("Stack operation");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");
    printf("4.Exit\n");
    printf("\nenter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4: return;
        default:printf("enter valid choice");
    }
}
}
void push()
{
    int c;
    if(top==(MAXSIZE-1))//condition to check whether a stack is full or not//
    {
        printf("overflow");
        return;
    }
    else{
        printf("enter element");
        scanf("%d",&c);
        stack[++top]=c;
    
    }
    return;
}
void pop()
{
    if(top==-1)//condition to check whether a stack is empty or not//
    {
        printf("underflow");
    return;
    }
    else{
        printf("poped element is %d",stack[top--]);
    }
}
void display()
{
    int i;
if(top==-1){
    printf("underflow");
    return;
}
else{
    printf("the elements of stack are");
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    
}
    }


