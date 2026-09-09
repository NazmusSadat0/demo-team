
#include <stdio.h>

int main()
{
    printf("Enter 3 sides of a triangle :");
    int a; scanf("%d",&a); int b; scanf("%d",&b); int c; scanf("%d",&c);
    if (
        (a+b>c && a-b<c) && (c+b>a && b-c<a) && (a+c>b && a-c<b)
        )             // took a risk but its working suuuuuuiiiiiiiii
    { printf("They can form a triangle");}
    else
    {printf("They cannot form a triangle");}
  

    return 0;
}
