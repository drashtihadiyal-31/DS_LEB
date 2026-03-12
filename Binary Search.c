#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10],i,first=0,last=9,mid=(first+last)/2,srch,flag=0,count=1;
    clrscr();
    for(i=0;i<10;i++)
    { 
       printf("Enter value %d :",i+1);
       scanf("%d",&x[i]);
    }
    printf("Enter Search Value :");
    scanf("%d",&srch);
    while(first<=last && flag==0)
    {
          if(srch==x[mid])
          {
               printf("\nValue found");
               flag=1;
          }
          else if(srch<x[mid])
          {
                last=mid-1;
                mid=(first + last)/2;
          }
          else
          {
                first=mid+1;
                mid=(first + last)/2;
          }
          count++;
    }
    if(flag==0)
    printf("\n value not found");
    printf("\n %d",count);
    getch();
}
    