   
#include <stdio.h>  
  
int main()  
{  
    int num, count = 1, sum = 0;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
  
    while(count <= num)  
    {  
        sum = sum + count;  
        count++;  
    }  
    printf("Sum = %d\n", sum);  
    return 0;  
}  