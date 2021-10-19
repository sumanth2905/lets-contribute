#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int i,n,j,pos,a[100],swap,c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            pos=i;
            for(j=i+1;j<n;j++)
            {
                
                if(a[j]<a[pos])
                {
                    pos=j;
                }
            }
       
        if(pos!=i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
            c++;
        } 
        }
        printf("%d\n",c);
        
    }
    return 0;
}
