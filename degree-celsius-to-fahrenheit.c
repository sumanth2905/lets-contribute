#include <stdio.h>  
  
int main()  
{  
    float c, fh;  
  
    printf("Enter temperature in Centigrade\n");  
    scanf("%f", &c);  
  
    fh = (c * 1.8) + 32;  
  
    printf("Temperature in Fahrenheit is %f\n", fh);  
  
    return 0;  
}