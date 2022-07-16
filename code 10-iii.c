//Program to print a table of N

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d x %d = %d\n",N,i,N*i);
        i++;
    } while (i<=10);
    return 0;
}