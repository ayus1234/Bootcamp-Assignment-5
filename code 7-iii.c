//Program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    i=N;
    do
    {
        printf("%d ",2*i);
        i--;
    } while (i>=1);
    return 0;   
}