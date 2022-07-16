//Program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    i=N;
    while(i>=1)
    {
        printf("%d ",2*i);
        i--;
    }
    return 0;
}