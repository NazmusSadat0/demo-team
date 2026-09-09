
#include <stdio.h>

int main()
{
    int l,b,a,p;
    printf("Enter length of a rectangle = "); scanf("%d",&l);
    printf("\nEneter breadth of a rectangle ="); scanf("%d",&b);
    a=l*b; p=2*(l+b); 
    printf("\nArea = %d",a); printf(" &  perimeter = %d",p);
    
    if (a>p)
     { printf("\nArea is greater than Perimeter");}
   else
   { printf("\nPerimeter is greater than Area");}
    
    return 0;
}
