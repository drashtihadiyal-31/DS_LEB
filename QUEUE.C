#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=0,rear=0;
void add()
{
	   if(rear==size)
	   {
		  printf("Queue is Full...");
	   }
	   else
	   {
		  printf("Enter value:");
		  scanf("%d",&x[rear]);
		  rear++;
		  printf("value inserted....");
	   }
}
void disp()
{
       if(rear==0)
       {
	      printf("Queue is empty...");
       }
       else
       {
	      int i;
	      for(i=front;i<rear;i++)
	      {
		   printf("\n%d",x[i]);
	      }
       }
}
void del()
{
	  if(rear==0)
	  {
		 printf("Queue is empty...");
	  }
	  else
	  {
		printf("value %d is removed...",x[front]);
		front++;
		if(front==rear)
		{
		       front=0;
		       rear=0;
		}
	  }
}
void srch()
{
	  int srch,f=0,i;
	  printf("enter serch value:");
	  scanf("%d",&srch);
	  for(i=0;i<size;i++)
	  {
	       printf("\n%d):%d",i+1,x[i]);
	       if(x[i]==srch)
	       {
		  printf("<== value found at here");
		  f=1;
	       }
	  }
	  if(f==0)
	  {
	    printf("value not found..!");
	  }
}
void main()
{
     int ch;
     while(1)
     {
	     clrscr();
	     printf("1) Add Data");
	     printf("\n2) Display Data");
	     printf("\n3) Delete Data");
	     printf("\n4) Serch Data");
	     printf("\n5)  Exit");
	     printf("\n\tEnter your choice:");
	     scanf("%d",&ch);
	     switch(ch)
	     {
		   case 1:
			   add();
			   break;
		   case 2:
			   disp();
			   break;
		   case 3:
			   del();
			   break;
		   case 4:
			   srch();
			   break;
		   case 5:
			   exit();
			   break;
	     }
	     getch();
     }
}