#include<stdio.h>
void main()
{
    int pages[50],frames[10],f,n,i,j,use[10],fault=1;
    printf("enter no: of pages :");
    scanf("%d",&n);
    printf("\nenter the pages :");
    for(i=0;i<n;i++)
        scanf("%d",pages[i]);
    printf("\nenter no: of frames :");
    scanf("%d",f);
    for(i=0;i<f;i++)
    {
        frames[i]=-1;
        use[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(frames[j]==pages[i])
            {
                fault=0;
                break;
            }
        }
        if(fault==1)
        {
            for(j=0;j<f;j++)
            {
                
            }
        }
    }
}