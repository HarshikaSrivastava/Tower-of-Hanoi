#include<stdio.h>
#include<conio.h>
#include<process.h>

   void main()
   {
   int i,num,choice,acker,gcd;//variable declaration
   int factorial,fibonacci,a,b;//variable declaration
   int  Factorial(int n);//function declaration  for factorial
   int Fibonacci(int n);// function declaration for fibonacci
   void TOH(int,char,char,char);//function declaration for TOH
   int Ackerman(int,int);//function declaration for ackerman function
   int GCD(int,int);//function of declaration for GCD function
   while(1)
   {
// clrscr();
	  printf("\n1 for fact\n 2 for fibo\n 3 for TOH\n 4 for Ackerman\n 5 for GCD\n 6 for exit");
	  printf("\nenter your choice\n");
	  scanf("%d",&choice);
   switch(choice)
   {

   case 1: printf("factorial\n");
	   printf("enter a number for factorial\n");
	   scanf("%d",&num);
	   factorial=fact(num);
	   printf("%d",factorial);
	   break;

   case 2: printf("fibonacci\n");
	   printf("enter a number for fibonacci\n");
	   scanf("%d",&num);
	   fibonacci=fibo(num);
	   printf("%d",fibonacci);
	   break;

   case 3: printf("Tower of hanoi\n");
	   printf("enter a number for finding TOH\n");
	   scanf("%d",&num);
	   TOH(num,'a','b','c');
	   printf("%d",TOH);
	   break;

   case 4: printf("ackerman\n");
	   printf("enter the value of a and b\n");
	   scanf("%d%d",&a,&b);
	   acker=ackerman(a,b);
	   printf("ackerman of a function is =%d",acker);
	   break;

   case 5: printf("GCD\n");
	   printf("enter the value of a and b\n");
	   scanf("%d%d",&a,&b);
	   gcd=GCD(a,b);
	   printf("GCD of two number is =%d",gcd);
	   break;

   case 6: exit (1);
    default:exit (1);
      getch();
	}
       }
      }
	int fact(int n)
      {

	 if(n==0)
	   return 1;
	 else
	   return n*fact(n-1);
      }
       int fibo(int num)
      {
	if(num<3)
	   return num-1;
      else
	   return fibo(num-1)+fibo(num-2);
      }


       void TOH(int num,char a,char b,char c)
	{
	if(num==1)
	  printf("move %c to %c\n",a,b);
	else
	  {
	  TOH(num-1,a,c,b);
	  printf("move %c to %c\n",a,b);
	  TOH(num-1,c,b,a);
	  }

	}

	 int ackerman(int a,int b)
	   {
	     if(a==0)
	      return b+1;
	     else if (a>0 && b==0)
	      return ackerman(a-1,1);
	     else if (a>0 && b>0)
	       return ackerman(a-1,ackerman(a,b-1));
	     else
	      return 0;

	    }

	 int GCD(int a,int b)
	  {
	   if(a==b)
	   return(a);
	   else if(a%b==0)
	   return(b);
	   else if(b%a==0)
	   return(a);
	   else if(a>b)
	   return(GCD(a%b,b));
	   else
	   return(GCD(a,b%a));
	  }
