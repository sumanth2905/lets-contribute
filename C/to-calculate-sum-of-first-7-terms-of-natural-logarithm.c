#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int count;  
    float x, result = 0.0;  
  
    printf("Enter value of x\n");  
    scanf("%f", &x);  
  
    for(count = 1; count <= 7; count++)  
    {  
        if(count == 1)  
        {  
            result = (x - 1) / x;  
        }  
        else  
        {  
            result = result + pow( (x - 1) / x, count) * 0.5;  
        }  
    }  
  
    printf("Result of first 7 terms = %0.2f\n", result);  
  
    return 0;  
}
