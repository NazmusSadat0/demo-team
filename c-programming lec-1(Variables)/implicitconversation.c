#include<stdio.h>
int main()
{
 // from codechef
  printf("Implict Conversation\n");
    char letter='A';
    int asciivalue=letter;  // widening conversion from char to int

    printf("Charecter: %c\n",letter);
    printf("ASCII Value: %d",asciivalue);


  printf("\n\nExplict conversation\n");

    int largervalue=120;
    char smallervalue=largervalue; // Narrowing conversion from int to char
    printf("Original int value: %d\n",largervalue);
  printf("Converted char value: %c",smallervalue);


} 