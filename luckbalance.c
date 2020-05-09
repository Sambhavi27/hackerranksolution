#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,k,c,d,swap,s=0,sum=0,sumone=0,count=0;
    scanf("%d %d",&n,&k);
    int array[n];
    int i,l[n],t[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&t[i]);
        if(t[i]==1)
        {
        count++;
        
        }
        else {
        sum=sum+l[i];
        }

    }
    int j=0;
    for(i=0;i<n;i++){
        if(t[i]==1)
        {
        array[j]=l[i];
        sumone=sumone+l[i];
        j++;
        }
    }
    for (c = 0 ; c < count - 1; c++)
    {
        for (d = 0 ; d < count - c - 1; d++)
        {
            if (array[d] > array[d+1]) 
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }

 if(k>=count)
 {
     s=sumone;
 }
 else
 {
    for(i=0;i<count-k;i++)
    {
        
        s=s+array[i]*(-1);
    }
    for(j=count-k;j<count;j++)
    {
        
        s=s+array[j];
    }
 }
 s=sum+s;
 printf("%d",s);
}
