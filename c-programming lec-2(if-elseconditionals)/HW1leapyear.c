#include<stdio.h>
int main()
{
    printf("Enter A Year =");
    int a; scanf("%d",&a);
     
     if(a%400==0)
     {printf ("Leap Year");}
     else if(a%4==0 && a%100!=0)
     {printf (" Leap Year ");}
     else {printf("Not Leap Year");}
     
     
    return 0;
}
