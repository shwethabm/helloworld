#include<stdio.h>
int mutex=1,empty=0,full=0,size,buffer[50];
wait(int s)
{
    while(s<=0);
    s--;
    return s;
}
signal(int s)
{
    s++;
    return s;
}
void producer()
{
    
}
void main()
{
    int opt;
    printf("enter buffer size : ");
    scanf("%d",&size);
    empty=buffer;
    printf("\n1.producer\n2.consumer\n3.exit\nenter the option:")
    scanf("%d",&opt)
    do{
    switch(opt)
    {
        case 1:if(mutex==1&&empty!=0)
                producer();
                else if(empty==0)
                printf("\nbuffer is full");
                break;
        case 2:if(mutex==1&&full!=0)
                consumer();
                else if(full==0)
                printf("\nbuffer is empty");
                break;
        case 3:break;                
    }
    }while(opt!=3);
}