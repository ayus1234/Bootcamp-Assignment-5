//Program to print a table of N

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",N,i,N*i);
    return 0;
}