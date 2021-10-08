#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    const float PI = 3.14;  
          float r, h, s_area;  
  
    printf("Enter radius and height of the cone\n");  
    scanf("%f%f", &r, &h);  
  
    s_area = PI * r * ( r + sqrt(h * h + r * r) );  
  
    printf("Surface Area of Cone is %f\n", s_area);  
  
    return 0;  
}