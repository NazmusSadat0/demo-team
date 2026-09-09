#include<stdio.h>
int main()
{
    /* Enter 2 integer values  for a amd b where a>b and find the remainder
    when a is divided by b*/
    int a,b,r,q;
    printf("Enter two values of a and b where a>b\n");
    scanf("%d %d",&a,&b);
    r=a%b; // % is the modulo operator which calculates the remainder directly.
    printf("when a is divided by b\n");
    printf("Remainder= %d",r);
    // useless formula; r=a-b*(a/b)
    
    
    
    printf("\n\nin another stupid way");
    q=a-b*(a/b);
    printf("\nRemainder=%d",q);
}