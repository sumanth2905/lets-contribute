#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14;  
          float r, h, volume;  
  
    printf("Enter radius and height of the cone\n");  
    scanf("%f%f", &r, &h);  
  
    volume = (PI * r * r * h) / 3.0;  
  
    printf("Volume of Cone is %f\n", volume);  
  
    return 0;  
}