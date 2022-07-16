//Program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d ",N+1-i);
    return 0;
}