
#include <stdio.h>

int main()
{
    printf("Enter a number = ");
    int n; scanf("%d",&n);
    if (n%5==0)
     { if (n%3==0)
       {printf("The number is divisible by 5 and 3");}
       else
      { printf("The number is not divisible by 5 and 3");}
           
       
     }
   else 
   {printf("The number is not divisible by 5 and 3");}
    
    // Another problem Q-12: divisible by 5 or 3 but not divisible by 15
    
    printf("\n Enter a number = ");
    int a; scanf("%d",&a);
    
    if (a%5==0 || a%3==0)
      { if(a%15!=0)        // ANOTHER WAY : if ((a%5==0 ||a%3==0) && a%15!=0) 
         { printf("Divisible by 5 or 3 but not divisible by 15");}
        else 
         { printf(" Divisible by 5 or 3 but divisible by 15");}
      }
         
    else {printf(" Not divisible by 5 or 3 ");}
         
         
    
    
    
    
    return 0;
}