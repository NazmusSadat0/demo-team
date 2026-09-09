#include<stdio.h>
int main()
{
    // Q-1: take an integer input and print half of it.
     float a; // int input will give int  fraction so input a should be float
    printf("Enter an integer="); 
    scanf("%f",&a);
    float b=a/2;
    printf("\nHalf of the number=%f",b);
    
    // Q-2: take float input and print the fractional part of the real number
    float x,y;
    printf("\nEnter a decimal number=");
    scanf("%f",&x);
    
    int z=x; // int z will take only integer part of the float input.
    printf("\ninteger part of the real number=%d",z);
    y=x-z;
    printf("\nfraction part of the real number=%f",y);
    
}