#include<stdio.h>
#include<conio.h>
#define cnt 6

void Find_Max_Ele(int*);

int main()
{
    int Arr[cnt]= {};

    Find_Max_Ele(Arr);

    getch();
    getch();
    printf("\n Thanks...");
    return 0;
}

void Find_Max_Ele(int *Arr)
{
    static int i=0,max=0;
    if(cnt > i)
    {
        printf("\n Enter %d Element=>",i+1);
        scanf("%d",&Arr[i]);
        if(Arr[i] > max)
        {
            max=Arr[i];
        }
        i++;
        Find_Max_Ele(Arr);
    }
    clrscr();
    printf("\n Enterd Element Maximum Element Is=>%d",max);
}