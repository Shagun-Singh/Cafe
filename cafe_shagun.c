#include<stdio.h>
#include<conio.h>
#include<string.h>
struct item
{
    char it[40];
    int p;
    int t;
}l[100];
int pay,time;
void add()
{
    m1: ;
    int i,j;
    float k;
    for(i=0;i<100;i++)
        if(0==strcmp(l[i].it,'\0')
            break;
    printf("\nEnter item name\n");
    gets(l[i].it);
    printf("\nEnter price\n");
    scanf("%f",&k);
    l[i].p=k;
    printf("\nEnter time in minutes\n");
    scanf("%d",&j);
    l[i].t=j;
    printf("\nEnter 1 to add more and any other to complete\n");
    scanf("%d",&j);
    if(j==1)
        goto m1;
}
void del()
{
    m2: ;
    clrscr();
    int a,i,j=0;
    printf("\nHere is the list select number to delete\n");
    for(i=0;i<100;i++)
        if(0!=strcmp(l[i].it,"\0")
            printf("\n%d\t%s\n",++j,l[i].it);
    if(j==0)
    {
        printf("\nPlease first enter some data to delete");
        add();
    }
    else
    {
        scanf("%d",&a);
        for(i=a-1;i<j;i++)
        {
            l[i].it=l[i+1].it;
            l[i].p=l[i+1].p;
            l[i].t=l[i+1].t;
        }
        printf("\nDone\nClick 1 to delete more\n");
        scanf("%d",&j);
        if(j==1)
            goto m2
    }
}
void ord()
{
    m4: ;
    clrscr();
    int a,b,c;
    printf("\nHere is the list select number to add in order\n");
    for(i=0;i<100;i++)
        if(0!=strcmp(l[i].it,"\0")
            printf("\n%d\t%s\n",++j,l[i].it);
    if(j==0)
        printf("\nNo item to order");
    else
    {
        scanf("%d",&a);
        printf("\nEnter quantity of %s\n",l[a-1].it);
        scanf("%d",&b);
    }
    pay+=((l[a-1].p)*b);
    time+=((l[a-1].t)*b);
    printf("\nEnter 1 for order item and any key to complete");
    scanf("%d",&c);
    if(c==1)
        goto m4;
    else
        printf("\nPlease receive your order in %d minutes and pay %d on the counter",time,pay);
}
void customer()
{
    int a=0;
    m3: ;
    clrscr();
    printf("\nEnter 1 for order item and 0 to end");
    scanf("%d",&a);
    if(a==1)
        ord();
    else if(a==0)
        return ;
    else
    {
        printf("\nPlease enter a number from list");
        goto m3;
    }
}
void staff()
{
    int a=0;
    m: ;
    clrscr();
    printf("\nEnter 1 for add item and 2 for delete item");
    scanf("%d",&a);
    if(a==1)
        add();
    else if(a==2)
        del();
    else
    {
        printf("\nPlease enter a number from list");
        goto m;
     }
}
void main()
{
    int a=0,b=3;
    while(b!=0)
    {
        clrscr();
        printf("Enter 1 for customer and 2 for staff");
        scanf("%d",&a);
        if(a==1)
            staff();
        else if(a==2)
            customer();
        else
        printf("\nPlease enter a number from list");
        printf("\n If you want to continue press any number except 0");
        scanf("%d",&b);
    }
    printf("\nThank you for your visit");
    getchar();
}
