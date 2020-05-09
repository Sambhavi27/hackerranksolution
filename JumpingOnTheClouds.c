#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    int n,i,count=0,size;
    char a[100];
    scanf("%d",&n);
    int c[n];
    if(n>=2&&n<=100)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&c[i]);
        }
    }

    i=0;
    while(i<n-1)
    {
        if(c[i]==0&&c[i+1]==0&&c[i+2]!=0)
        {
        i=i+1;
        count++;
        }
        if(c[i]==0&&c[i+1]==1)
        {
        i=i+2;
        count++;
        }
        if(c[i]==0&&c[i+1]==0&&c[i+2]==0)
        {
        i=i+2;
         count++;
        }
    }
   
    printf("%d",count);
}

