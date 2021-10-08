#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14;  
          float r, c;  
  
    printf("Enter Radius of the Circle\n");  
    scanf("%f", &r);  
  
    c = 2 * PI * r;  
  
    printf("Circumference of the Circle is %f\n", c);  
  
    return 0;  
}