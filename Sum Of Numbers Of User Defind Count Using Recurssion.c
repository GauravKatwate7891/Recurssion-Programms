#include<stdio.h>
#include<conio.h>

void Sum_Num(int);

int main()
{
    int cnt=0;

    printf("\n Enter The Count Of NUmbers Get Sum=>");
    scanf("%d",&cnt);
    clrscr();

    printf("\n Enter %d Numbers=>\n",cnt);
    Sum_Num(cnt);

    getch();
    getch();
    printf("\n Thanks...");
    return 0;
}

void Sum_Num(int cnt)
{
    static int sum=0,No=0;

    if(cnt > 0)
    {
        scanf("%d",&No);
        sum=sum+No;
        cnt--;
        Sum_Num(cnt);
    }
    clrscr();
    printf("\n Given Numbers Addition Is=>%d",sum);
}

