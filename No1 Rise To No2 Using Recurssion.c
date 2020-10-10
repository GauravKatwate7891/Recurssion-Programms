#include<stdio.h>
#include<conio.h>

void Power(int,int);

int main()
{
    int No1=0,No2=0;
    printf("\n Enter Any Two Number=>");
    scanf("%d %d",&No1,&No2);

    Power(No1,No2);

    getch();
    getch();
    printf("\n Thanks...");
    return 0;
}

void Power(int ino1,int ino2 )
{
    static int Pow=1;

    if(ino2 > 0)
    {
        Pow=Pow*ino1;
        ino2--;
        Power(ino1,ino2);
    }
    clrscr();
    printf("\n Power Of Given Number Is=>%d",Pow);
}