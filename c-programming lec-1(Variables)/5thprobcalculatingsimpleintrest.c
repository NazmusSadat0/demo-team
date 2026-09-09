#include<stdio.h>
int main()
{
    printf("Problem 5: Calculating Simple Intrest\n\n");
    printf("we know, si= prt/100\n\n");
    
    float p,r,t,si,fi,v;
    printf("Input Principal= "); scanf("%f",&p);
    printf("\nRate= "); scanf("%f",&r);
    printf("\nTime= "); scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nSimple Intrest=%f",si);
    printf("\nVat on Intrest="); scanf("%f",&v);
    fi=si-(si*v)/100;
    printf("Final Intrest=%f",fi);
    
    
    
    printf("\n\n Another way to do this code");
    float a,b,c,d; // we can add as many variables as we need in this way and it keeps the code clean
    a=100; b=10; c=7;
    d=(a*b*c)/100;
    printf("\n si=%f",d);
     
     return 0;
    
    
    
    
    
    
}