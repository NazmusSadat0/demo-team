#include<stdio.h>

int ps=450; // Global variable
int main()
{
    printf("Local scope\n");
 // starting main block
  { 
    int temp =26;  // block level variable(local)
    printf("Inside block: Temperature is %d degrees",temp);

 }

// variable declaration outside block
// printf("Outside block: temperature is %d degree",temp); // this will not work ,causing a compilation error
  // have to comment it out to run the code


printf("\nGlobal Scope\n");
printf("Present students before update: %d\n",ps); // accessing and printing global variable

ps=480; // accessing and updating global variable
printf("Present students after update: %d",ps); // orinting updated value of gv



}