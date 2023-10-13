#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter x and y");
scanf("%d""%d",&x,&y);
printf("before swapping x=%d and y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping x=%d and y=%d",x,y);
return 0;
}
