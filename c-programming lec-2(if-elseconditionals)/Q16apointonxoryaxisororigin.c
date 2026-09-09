
#include <stdio.h>

int main()
{
    printf("Enter a point (x,y)= ");
    int x,y; scanf("%d%d",&x,&y);
   if (x==0 && y==0) {printf("\nThe point is  origin");}
   else  if (y==0) printf("\nThe point is on x-axis");
  else  if (x==0) printf("\nThe point is on y-axis");
   else printf("\nThe point is not on x/y-axis and nor the origin ");

    return 0;
}
 