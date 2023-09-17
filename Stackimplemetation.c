//stack implementation
#include<stdio.h>
#include<stdlib.h>

#define N 1000

//void push(int);
void push();
void pop();
void display();

int stack[N],top =-1;

int main()
{
    printf("Staic Array :(toal number : %d)",N);
    while(1)
    {
    int value , choice;
    
    printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit()\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                //printf("enter vale to be insert:");
                //scanf("%d",&value);
                //ush(value);
                push();
                break;
            case 2 :
                pop();
                break;
            case 3:
                display();
                break;
            case 4 :
                exit(0);
                break;
            default :
                printf("Invalid Choice");
        }
    }
}
void push()
{
    
    if (top == N-1)
    {
        printf("Stack is full !! insertion is no possible!!");
    }
    else{
        int value;
        printf("Enter element to be inset:");
        scanf("%d",&value);
        top++;
        stack [top]= value;
        printf("Insertion Successfull");
    }
    
}
void pop()
{
    if(top== -1)
    {
        printf("Stack is empty:\n");
    }
    else{
        top--;
        printf("\nItem Deleted", stack[top]);
        
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty:\n");
    }
    else{
        int i;
        printf("Stack element are :\n");
        for (int i = top; i >=0; i--)
        {
            printf("%d", stack[i]);
        }
        
    }
    
}
