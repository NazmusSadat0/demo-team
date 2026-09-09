
#include <stdio.h>

int main()
{
    // Q-1:
      printf("Q-1");
    int x=10,y=20;
    if (x==y)
     printf("\n%d %d",x,y);
   // Q-2:
     printf("\nQ-2");
   int x1=3,y1=5;
   if(x1==3)
   printf("\n%d",x1);
   else
   printf("\n%d",y1);
   // Q-3:
     printf("\nQ-3");
   int x2=3; float y2=3.0;
   if(x2==y2)
   printf("\nx and y are equal");
   else
   printf("\nx and y are not equal");
   //Q-4:
   printf("\nQ-4");
   int x3=3,y3,z3;
   y3=x3=10;
   z3=x3<10;
   printf("\nx=%d y=%d z=%d",x3,y3,z3);
    //HW-5:
   printf("\nQ-5");
   int a=5,b,c;
   b=a=15;
   c=a<10;
   printf("\na=%d b=%d c=%d",a,b,c);
   //Q-6:
   printf("\nQ-6");
   int k = 35;
   printf("\n%d %d %d",k==45,k=50,k>40);
   //HW-6:
   printf("\nHW-6");
   int x5=15;
   printf("\n%d %d %d",x5!=15,x5=20,x5<30);
   // Q-8:
   printf("\nQ-8");
   int i=65; char j='A';
   if(i==j)
   printf("\nC is WOW ");
   else printf("\nC is a headache");
   // The real thing::
   printf("\nThe real thing");
   if(3+2%5) printf("\nthis works");
   if(a=10) printf("\nAlso this works");
   if("-5") printf("\nEven this work");
   if('a') printf("\n works");
    if(0) printf("\n works");   // will not work because 0 means false so if will not work
   
   
   
   
    return 0;
}