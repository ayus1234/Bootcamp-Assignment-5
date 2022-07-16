//Program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d ",i*i);
        i++;
    } while (i<=N);
    return 0;
}