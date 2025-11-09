//Write a program to input two numbers and display their sum.
#include<stdio.h>
int main(){
    int a , b;

    printf("Enter your numbers");
    scanf("%d %d" , &a , &b);

    int sum = (a+b);

    printf("The sum of %d and %d is %d" , a , b , sum);

    return 0;
}