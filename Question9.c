#include<stdio.h>
void main() 
{
    float p,r,t,si;
    printf("Enter the Principal value:");
    scanf("%f",&p);
     printf("Enter the Rate:");
    scanf("%f",&r);
     printf("Enter the Duration:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The Value of Simple Interest is : %f",si);

}