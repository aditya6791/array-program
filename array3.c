#include<stdio.h>
int main()
{
int a[4],i,j,temp;
printf("enter five value");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
    for(j=0;j<=4-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("sorted array");
for(i=0;i<=4;i++)
{
printf("%d",a[i]);
}
}






