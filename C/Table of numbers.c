#include<stdio.h>
void main()
{
    int a, i, b;
    printf("\nEnter a value to print it's table\n");
    scanf("%d", &a);
    for(i=1; i<=10; i++)
        {
            b = a * i;
            printf("\n %d X %d = %d \n", a,i,b);
        }
    }
