#include<stdio.h>
// CALL BY REFERENCE
void swap(int *x,int *y){
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
}
int main(){
     int m,n;
     
     printf("ENTER THE VALUE OF FIRST VARIABLE\n");
     scanf("%d",&m);
    
     printf("ENTER THE VALUE OF SECOND VARIABLE\n");
     scanf("%d",&n);
    
     swap(&m,&n);
     
     printf("THE VALUE OF FIRST VARIABLE AND SECOND VARIABLE AFTER SWAPING IS %d AND %d\n",m,n);
      
       return 0;

}
