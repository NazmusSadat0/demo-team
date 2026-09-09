#include <stdio.h>

int main()
{
    printf("Enter a positive integer number = ");
    int a; scanf("%d",&a); 
    if (a>=100 && a<=999) // (a>99 && a<1000)
    { printf("It is a three digit number");}
    else
    {printf("\nIt is not a three digit number");}
    
    //another prob Q-7: divisible by 5 (((and))) 3
    
  printf("\n\nEnter a positive integer number = "); 
  int b; scanf("%d",&b);
  
  if (b%5==0 && b%3==0) //(b%15==0)
   {printf("Divisible by 5 and 3");}
   else
   {printf("Not divisible by 5 and 3");}
   
   // Another prob Q-8: divisible by 5 (((OR))) 3
   printf("\n\n Enter a positive integer=");
   int c; scanf("%d",&c);
   if (c%5==0 || c%3==0)
     {printf("Divisible by 5 or 3");}
    else
       {printf("Not divisible by 5 or 3");}
     
     
   
   
   
   
   
    
    
    
    
    return 0;
}
