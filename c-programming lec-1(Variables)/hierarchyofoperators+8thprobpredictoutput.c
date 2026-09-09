#include<stdio.h>
int main()
{
    int I=2*3/4+4/4+8-2+5/8;
    printf("%d",I);
    
    
    // PROBLEM-8:Predict Output
    printf("\nEnter 2 numbers i and j=");
    int i,j,k,l; float a,b;
    scanf("\n%d",&i); scanf("\n%d",&j);
    printf("\nk=i/j*j="); k=i/j*j; printf("%d",k);
    printf("\nl=j/i*i="); l=j/i*i; printf("%d",l);
    printf("\na=i/j*k="); a=i/j*k;  printf("%f",a);
    printf("\nb=j/i*i="); b=j/i*i; printf("%f",b);
    printf("\n another way of output");
    printf("\n%f %f %d %d",a ,b ,k, l);
}