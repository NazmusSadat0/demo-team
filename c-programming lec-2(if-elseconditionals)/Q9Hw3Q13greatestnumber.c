
#include <stdio.h>

int main()
{
    printf("Enter 3 distinct integers :");
    int a,b,c; 
    scanf("%d",&a); scanf("%d",&b); scanf("%d",&c); /* Urbi baby i am missing you too
     but trying to finish my works asap love you sweetheart ;) */
    if (a>b && a>c)
    { printf("Greatest number = %d",a);}
   if  (b>a && b>c)
    { printf("Greatest number = %d",b);}
   if (c>a && c>b) 
  { printf("Greatest number = %d",c);}
  
  // another prob HW-3: Find greates among 4 inputs
  
  printf("\n\n Another way  for the same problem");
  int x,y,z,q;
  printf("\nEnter 1st number = "); scanf("%d",&x);
  printf("\nEnter 2nd number = "); scanf("%d",&y);
   printf("\nEnter 3rd number = "); scanf("%d",&z);
    printf("\nEnter 4th number = "); scanf("%d",&q);
  if (x>y && x>z && x>q) { printf("Greatest number =%d",x);}
   if (y>x && y>z && y>q) { printf("Greatest number =%d",y);}
   if (z>y && z>x && z>q) { printf("Greatest number =%d",z);}
   if (q>y && q>z && q>x) { printf("Greatest number =%d\n",q);}
  
  //Q-13:Another way to solve it without logical operators
  
  printf("\n\nAgain same problem\nEnter three positive integers =\n");
  int m,n,o; 
  scanf("%d %d %d",&m, &n,&o);
  if(m>n)
    { if (m>o)
     {printf("Greatest number = %d",m);}
    
    else printf("Greatest number =%d",o); // O>M
    }
     if(n>m)
    { if (n>o)
     {printf("Greatest number =%d",n);}
    
    else printf("Greatest number =%d",o); // O>N
    }
   /* if(o>n)
    { if (o>m)
     {printf("Greatest number =%d",o);}
    }
     */
     
  
  
  
  
   
    return 0;
}
