
#include <stdio.h>

int main()
{ 
    int x1,y1,x2,y2,x3,y3;
   printf("Enter 1st point (x1,y1)= "); scanf("%d%d",&x1,&y1);
   printf("\nEnter 2nd point (x2,y2)= "); scanf("%d%d",&x2,&y2);
   printf("\nEnter 3rd point (x3,y3)= "); scanf("%d%d",&x3,&y3);
    
    int m1=(y2-y1)/(x2-x1); int m2=(y3-y2)/(x3-x2); int m3=(y1-y3)/(x1-x3);
    if (m1==m2 && m2==m3 && m1==m3)
  {printf("\nThey fall on one straight line");}
  else
  {printf("\nThey do not fall on one straight line ");}
    return 0;
}