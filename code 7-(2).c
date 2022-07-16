//Program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d ",2*(N+1-i));
    return 0;
}