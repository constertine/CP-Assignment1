#include<stdio.h>
#include<math.h>
void main() 
{
    float p,r,t,ci,n;
    printf("Enter the Principal value:");
    scanf("%f",&p);
     printf("Enter the Rate:");
    scanf("%f",&r);
     printf("Enter the Duration:");
    scanf("%f",&t);
    printf("Enter the Number of times interest is compounded:");
    scanf("%f",&n);
    ci=p*((powf((1+r/100),t))) -p;
    printf("The Value of Simple Interest is : %f",ci);

}