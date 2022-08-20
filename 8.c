#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch(x>0)
    {
        case 1 :
            x=-x;
            printf("%d",x);
            break;
        case 0 :
            x=-x;
            printf("%d",x);
    }
    getch();
}
