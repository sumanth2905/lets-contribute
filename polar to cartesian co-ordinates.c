   
#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    float x, y, r, theta;  
    const float PI = 3.141592;  
  
    printf("Enter Polar Co-ordinates(r, theta)\n");  
    scanf("%f%f", &r, &theta);  
  
    /* Convert angle from Degree To Radian */    theta = theta * (PI / 180.0);   
  
    x = r * cos(theta);  
    y = r * sin(theta);  
  
    printf("Cartesian Co-ordinates (x, y) = (%f, %f)\n", x, y);  
  
    return 0;  
}