//Program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d ",N+1-i);
        i++;
    } while (i<=N);
    return 0;
}