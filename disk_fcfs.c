#include<stdio.h>
void main()
{
  int queue[20],num,i,max,head,tot_seek=0,curr;float avg_seek=0;
  printf("enter maximum cylinder range :");
  scanf("%d",&max);
  printf("\nenter number of cylinder requests :");
  scanf("%d",&num);
  printf("\nenter the request queue :");
  for(i=0;i<num;i++)
  {
    scanf("%d",&queue[i]);
  }
  printf("\nenter head cylinder position :");
  scanf("%d",&head);
  curr=head;
  for(i=0;i<num;i++)
  {
    if(queue[i]>curr)
      tot_seek=tot_seek+queue[i]-curr;
    else
      tot_seek=tot_seek+curr-queue[i];
    curr=queue[i];
  }
  printf("\nthe total seek time : %d\n",tot_seek);
  avg_seek=(float)tot_seek/num;
  printf("\nthe avg seek time : %f\n",avg_seek);
}
