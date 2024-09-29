#include<stdio.h>
void main(){
    int basic;
    printf("Enter the Basic salary of the person :");
    scanf("%d",&basic);
    int da = 0.1*basic;
    int ta = 0.12*basic;
    int gross = basic + da + ta;
    printf("The gross salary will be equal to : %d",gross);
    


}