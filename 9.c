#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1 :
        printf("%d",x+1);
        break;
    case 0 :
        printf("%d",x);
    }
    getch();
}
