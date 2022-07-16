//Program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
        printf("%d ",i);
    return 0;
}