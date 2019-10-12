#include<stdio.h>
void main()
{
  int j,queue[20],max,n,i,head,tot_seek=0,temp,curr,min=0;float avg_seek=0;
  printf("enter the max range of cylinders :");
  scanf("%d",&max);
  printf("\nenter number of requests :");
  scanf("%d",&n);
  printf("\nenter the requests :");
  for(i=0;i<n;i++)
  {
    scanf("%d",&queue[i]);
  }
  queue[n]=0;
  queue[n+1]=max-1;
  printf("\nenter head cylinder position :");
  scanf("%d",&head);
  queue[n+2]=head;
  curr=0;
  for(i=0;i<n+2;i++)
  {
     min=i;
     for(j=i+1;j<n+3;j++)
     {
         if(queue[j]<queue[min])
           min=j;
     }
     temp=queue[i];
     queue[i]=queue[min];
     queue[min]=temp;
   }
   printf("\n");
   for(i=0;i<n+3;i++)
   { printf("%d ",queue[i]);
     if(head==queue[i])
       curr=i;
   }
   printf("\n");
   for(i=curr;i>=0;i--)
   {
    if(i!=0)
     tot_seek=tot_seek+queue[i]-queue[i-1];
     printf("%d -> ",queue[i]);
   }
   tot_seek=tot_seek+queue[curr+1];
   printf("%d ->",queue[curr+1]);
   for(i=curr+2;i<n+3;i++)
   {
     
       tot_seek=tot_seek+queue[i]-queue[i-1];
     if(i==n+2)
      printf("%d",queue[i]);
     else
      printf("%d -> ",queue[i]);
   }
  printf("\ntottal cylinder movements : %d",tot_seek);
}
