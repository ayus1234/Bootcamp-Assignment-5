//Program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}