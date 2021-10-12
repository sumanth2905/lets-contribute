#include<stdio.h>

int main(){
      int num[10];
     for(int i=0;i<10;i++){
         printf("ENTER THE NUMBER\n");
         scanf("%d",&num[i]);
         }
     for(int i=0;i<10;i++){
         for(int j=i+1;j<10;j++){
          if(num[i]==num[j]){
                printf("THE ARRAY CONTAINS DUPLICATE VALUES\n");
          } 
          
        }
      }
      return 0;

}
