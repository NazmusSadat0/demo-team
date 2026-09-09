
#include <stdio.h>

int main()
{
    int c,s,l,p;
    printf("Enter cost price = "); scanf("%d",&c);
    printf("\nEnter selling price = "); scanf("%d",&s);
if (c>s)
    { printf("\nSeller incurred loss");
    l=c-s; printf("\n Loss=%d ",l);}
else if (s>c) // --------------------->>> IF (S>C) WE USED IT BEFORE
    { printf("\nSeller made profit");
    p=s-c; printf("\nProfit = %d",p);}
else
    {printf("\n no profit ,no loss");}
    
    

    return 0;
}
