#include<stdio.h>
int main()
{
    
    printf("Enter a number =");
    int a; scanf("%d",&a);
    if (a%2==0) // CONDITION
      { 
          printf("EVEN NUMBER\n ");
         
      }
    else  
    { printf("ODD NUMBER");}
    
    
    printf("\nEnter a positive integer number =");
    int A; scanf("%d",&A);
    if (A%5==0) // CONDITION
    { printf("DIVISIBLE BY 5");}
    
   else
    { printf("NOT DIVISIBLE BY 5");}
    
    // AGAIN EVEN/ODD USING TERNARY OPERATORS
    
    printf("\n\nEnter a number = ");
    int B; scanf("%d",&B);
    // TERNANRY OPERATOR - EXP1(condition)? EXP2(yes ,thn this statement): EXP3(no, thn this statement)
    B%2==0? printf("\nEVEN Number"): printf("\nODD Number");
    
    /* if (a%2==0) // CONDITION
      { 
          printf("EVEN NUMBER\n ");
         
      }
    else  
    { printf("ODD NUMBER");} */
    
}