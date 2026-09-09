#include <stdio.h>

int main()
{ printf("Program to find the youngest(only for diffret ages)\n\n");

   printf("Enter age of Ram = "); int r; scanf("%d",&r);
 printf("\nEnter age of Shyam = "); int s; scanf("%d",&s);
   printf("\nEnter age of Ajay = "); int a; scanf("%d",&a);
    if (a<s && a<r) { printf("\nAjay is youngest");}
 if (s<a && s<r) { printf("\nShyam is youngest");}
 if (r<s && r<a) { printf("\nRam is youngest");}
 
 // Another way same prob HW-5: use nested conditions
 
 printf("\n\n Same prob again\n Enter the age of Ram , Shyam, Ajay =");
 int A,B,C; scanf("%d%d%d",&A,&B,&C);
 if (A<B)
   { if(A<C)
  { printf("\nRam is younget");}
   else 
   {printf("\nAjay is youngest");}
   }
  if (B<A)
    { if(B<C)
      { printf("\nShyam is youngest");}
  else
       {printf("\nAjay is youngest");}
     }
  
 
 
 
 
 
 
    return 0;
}
