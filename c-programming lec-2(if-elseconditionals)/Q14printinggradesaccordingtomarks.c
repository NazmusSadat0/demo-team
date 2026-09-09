#include<stdio.h>
int main()
{
 printf("Enter Percentage =");
 int a; scanf("%d",&a);
 if(a>89) printf("\nGrade:Excellent");
else if(a>=80 && a<=89) printf("\nGrade:Very Good");
else if(a>=70 && a<=79) printf("\nGrade:Good");
else if(a>=60 && a<=69) printf("\nGrade:Can do better");
else if(a>=50 && a<=59) printf("\nGrade:Avarage");
else if(a>=40 && a<=49) printf("\nGrade:Below Avarage");
else printf("\nGrade:Fail");


}
