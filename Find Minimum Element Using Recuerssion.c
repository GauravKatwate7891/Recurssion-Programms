#include<stdio.h>
#include<conio.h>
#define cnt 6

void Find_Min_Ele(int*);

int main()
{
    int Arr[cnt]= {};

    Find_Min_Ele(Arr);

    getch();
    getch();
    printf("\n Thanks...");
    return 0;
}

void Find_Min_Ele(int *Arr)
{
    static int i=0,min=0;
    if(cnt > i)
    {
        printf("\n Enter %d Element=>",i+1);
        scanf("%d",&Arr[i]);
        if(i == 0)
        {
            min=Arr[i];
        }
        if(Arr[i] < min)
        {
            min=Arr[i];
        }
        i++;
        Find_Min_Ele(Arr);
    }
    clrscr();
    printf("\n Enterd Element minimum Element Is=>%d",min);
}