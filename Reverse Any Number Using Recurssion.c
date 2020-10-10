#include<stdio.h>
#include<conio.h>

void Rev_Num(int);

int main()
{
    int Num=0;

    printf("\n Enter The Number=>");
    scanf("%d",&Num);

    Rev_Num(Num);

    getch();
    getch();
    printf("\n Thanks...");
    return 0;
}

void Rev_Num(int No)
{
    static int rev=0,rem=0;

    if(No > 0)
    {
        rem=No%10;
        No=No/10;
        rev=rev*10+rem;
        Rev_Num(No);
    }
    clrscr();
    printf("\n Given Number Reverse Number Is=>%d",rev);
}

