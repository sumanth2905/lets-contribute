#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    float area, side, p, q;  
  
    printf("Enter the length of side and a diagonal\n");  
    scanf("%f%f", &side, &p);  
  
    q    = sqrt( (4 * side * side) - (p * p) );  
    area = (p * q) * 0.5;  
  
    printf("Area of the Rhombus is %f \n", area);  
  
    return 0;  
}