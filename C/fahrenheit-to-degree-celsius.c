#include <stdio.h>  
  
int main()  
{  
    float c, fh;  
  
    printf("Enter temperature in Fahrenheit\n");  
    scanf("%f", &fh);  
  
    c = (fh - 32) / 1.8;  
  
    printf("Temperature in Degree Celius is %f\n", c);  
  
    return 0;  
}