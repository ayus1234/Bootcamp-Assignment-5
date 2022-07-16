//Program to print the first N odd natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d ",2*(N+1-i)-1);
        i++;
    } while (i<=N);
    return 0;
}