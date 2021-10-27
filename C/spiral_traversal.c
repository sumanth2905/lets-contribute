wap to print the elements in spiral traversal
#include<stdio.h>
void main()
{ int arr[6][6];
int i,j;
int put=1;
  for(i=0;i<6;i++)
  {for(j=0;j<6;j++)
  {
   arr[i][j]=put++;
			if(put>19)
			{
				arr[i][j]=36-(put-2);
			}

}
  }

  	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
int minc,maxc,minr,maxr;
minc=0;
minr=0;
maxc=5;
maxr=5;
printf("printing the elemnts in spiral traversal \n");

while(minc!=3 &&maxc!=3)
 {for(i=minr;i<=maxr;i++)
 {printf(" %d ",arr[i][minc]);

 } minc++;

for(i=minc;i<=maxc;i++)
{printf("%d ",arr[maxr][i]);


}  maxr--;
for(i=maxr;i>=minr;i--)
{printf("%d ",arr[i][maxc]);

}maxc--;
for(i=maxc;i>=minc;i--)
{printf("%d ",arr[minc][i]);
} minr++;}

}

 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
18 17 16 15 14 13
12 11 10  9  8  7
 6  5  4  3  2  1
printing the elemnts in spiral traversal
 1  7  13  18  12  6 5 4 3 2 1 7 13 18 12 6 11 10 9 8  8  14  17  11 10 9 8 14 17 11 16 15
