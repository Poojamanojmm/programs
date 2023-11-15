#include<stdio.h>
int main()
{
int
i,j,k,p,ch,n1,n2,set1[10],set2[10],set3[20],flag;
int wish;
printf("\n enter the size of set1\n");
scanf("%d",&n1);
printf("\n enter the element of set1\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("\n enter the size of set2\n");
scanf("%d",&n2);
printf("\n enter the elements of set2\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
do
{
printf("\n menu for set operations");
printf("\n press 1 for UNION");
printf("\n press 2 for INTERSECTION");
printf("\n press 3 for DIFFERENCE");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
k=0;
for(i=0;i<n1;i++)
{
set3[k]=set1[i];
k++;
}
for(i=0;i<n2;i++)
{
flag=1;
for(j=0;j<n1;j++)
{ 
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set2[i];
k++;
}
}
p=k;
for(k=0;k<p;k++)
{
printf("%d",set3[k]);
}
break;
case 2:
k=0;
for(i=0;i<n2;i++)
{
flag=1;
for(i=0;j<n1;j++)
{
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==0)
{
set3[k]=set2[i]:
k++;
}
]
p=k;
for(k=0;k<p;k++){printf("%d",set3[k]
}
break;
case 3:
k=0;
for(i=0;i<n1;i++)
{
flag=1;
for(j=0;j<n2;j++)
{
if(sset1[i]==set2[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set1[i];
k++;
}
}
p=k;
for(k=0;k<p;k++)
{
printf("%d",set3[k]);
}
break;
}
printf("\n do you want to continue(0/1)?);
sacnf("%d",&wish);
}
while(wish==0);return 0;
}
