//Program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("MySirG\n");
        i++;
    } while (i<=N);
    return 0;
}