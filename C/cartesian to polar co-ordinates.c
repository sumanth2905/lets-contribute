   
#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    float x, y, r, theta;  
    const float PI = 3.141592;  
  
    printf("Enter Cartesian Co-ordinates(x, y)\n");  
    scanf("%f%f", &x, &y);  
  
    r     = sqrt(x*x + y*y);  
    theta = atan(y/x);       // Radian  
  
    theta = theta * (180.0 / PI); //Radian To Degree Conversion  
  
    printf("Polar Co-ordinates: (r, theta) = (%f, %f)\n", r, theta);  
  
    return 0;  
}  
