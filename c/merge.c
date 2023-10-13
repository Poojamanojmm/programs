#include<stdio.h>
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
int i=0,j=0,k=0;
while(i<n1&&j<n2)
{
if(arr1[i]<arr2[j])
{
arr3[k++]=arr1[i++];
}
else
{
arr3[k++]=arr2[j++];
}
}
while(i<n1)
arr3[k++]=arr1[i++];

while(j<n2)
arr3[k++]=arr2[j++];
}
int main()
{
int n1;
printf("enter the no of element in 1st array");
scanf("%d",&n1);
printf ("enter the elenent of 1st array");
int arr1[n1];
for(int i=0;i<n1;i++)
scanf("%d",&arr1[i]);
int n2;
printf("enter the no of element in 2st array");
scanf("%d",&n2);
printf ("enter the elenent of 2st array");
int arr2[n2];
for(int i=0;i<n2;i++)
scanf("%d",&arr2[i]);
int arr3[n1+n2];
merge(arr1,arr2,n1,n2,arr3);
printf("\n Array after merging\n");
for(int i=0;i<n1+n2;i++)
printf("%d",arr3[i]);
return 0;}
