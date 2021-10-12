#include <stdio.h>

int main()
{
    int len;
    printf("Enter length of array : ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the elements of array : \n");
    for(int i=0; i<len; i++)
    scanf("%d", &arr[i]);

    int max=0, min=0;     // to store index

    for(int j=1; j<len; j++)
    {
        if(arr[j] > arr[max])
        max = j;

        if(arr[j] < arr[min])
        min = j;
    }
   printf("The largest number is :%d\n",arr[max]);
      printf("The Position of largest number is at index :%d\n",max);
       printf("The Smallest number is :%d\n",arr[min]);
        printf("The Position of smallest number is at index :%d\n",min);
    int temp;
    temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;
  
    printf("New array : ");
    for(int i=0; i<len; i++)
    printf("%d\t", arr[i]);

    return 0;
}
