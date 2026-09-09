
#include <stdio.h>

int main()
{
    printf("Enter an integer =");
    int a; scanf("%d",&a);
    if (a<0)  // if a is negetive  make it positive
    
    { printf("Absolute value of it = %d",-a);} 
    // another way : a=a*-1; printf ("absolute value =%d",a);
    else 
    {printf("Absolte value of it = %d",a);}

    return 0;
}
