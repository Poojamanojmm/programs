#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Stack
{
int items[MAX_SIZE];
int top;
};
void initialize(struct Stack *stack)
{
stack->top=-1;
}
int isEmpty(struct Stack *stack)
{
return(stack->top==-1);
}
int isFull(struct Stack *stack)
{
return(stack->top==MAX_SIZE-1);
}
void push(struct Stack *stack, int item)
{
if(isFull(stack))
{
printf("stack is full.cannot push %d.\n", item);
}
else
{
stack->items[++stack->top]=item;
printf("%d pushed onto the stack.\n", item);
}
}
void pop(struct Stack *stack)
{
if(isEmpty(stack))
{
printf("stack is empty.cannot pop.\n");
}
else
{
printf("%d popped from the stack.\n",stack->items[stack->top--]);
}
}
void peek(struct Stack *stack)
{
if(isEmpty(stack))
{
printf("stack is empty.cannot peek.\n");
}
else
{
printf("top item:%d\n",stack->items[stack->top]);
}
}
void display(struct Stack *stack)
{
if(isEmpty(stack))
{
printf("Stack is empty.\n");
}
else
{
printf("Stack elements:");
for (int i=0;i<=stack->top;i++)
{
printf("%d",stack->items[i]);
}
printf("\n");
}
}
int main()
{
struct Stack stack;
initialize(&stack);
int choice, item;
do
{
printf("\nstack operations:\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.quit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
printf("enter an item to push onto the stack:");
scanf("%d",&item);
push(&stack,item);
break;
case2:
pop(&stack);
break;
case3:
peek(&stack);
break;
case4:
display(&stack);
break;
case5:
printf("exiting the program.\n");
exit(0);
default:
printf("invalid choice.please try again.\n");
}
}
while(1);
return 0;
}


