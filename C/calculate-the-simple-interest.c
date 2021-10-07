   
#include<stdio.h>  
  
int main()  
{  
    int p, t;  
    float r, si;  
  
    printf("Enter principal amount\n");  
    scanf("%d", &p);  
  
    printf("Enter Rate of interest\n");  
    scanf("%f", &r);  
  
    printf("Enter time period\n");  
    scanf("%d", &t);  
  
    si = (p * t * r) / 100.0;  
  
    printf("Simple Interest is %f\n", si);  
    
    return 0;
}