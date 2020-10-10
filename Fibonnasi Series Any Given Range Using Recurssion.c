#include<stdio.h>
#include<conio.h>

void F_Series(int);

int main()
{
    int cnt=0;

    printf("\n Enter The Count Of Febonassi Series=> ");
    scanf("%d",&cnt);

    printf("\n Fibonassi Series is Given Range Is=>\n");

    F_Series(cnt);

    printf("\n\n Thanks...");
    getch();
    return 0;
}

void F_Series(int CNT)
{
    static int No1=0,No2=1,No3=0;

    if(CNT > 0)
    {
        printf("\n %d",No3);
        No1=No2;
        No2=No3;
        No3=No1+No2;
        CNT--;
        F_Series(CNT);
    }
}
