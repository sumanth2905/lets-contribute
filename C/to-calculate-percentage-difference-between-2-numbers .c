#include<stdio.h>  
#include<stdlib.h>  
  
int main()  
{  
    float a, b, result;  
  
    printf("Enter 2 numbers\n");  
    scanf("%f%f", &a, &b);  
  
    result = ( abs(a-b) / ( (a+b)/2.0 ) ) * 100;  
  
    printf("Percentage difference is %f\n", result);  
  
    return 0;  
}