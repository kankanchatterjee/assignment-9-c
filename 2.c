#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int x,a,b;
    while(1)
    {
    printf("\n1.Adition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nEnter your choice");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        printf("sum is %d",a+b);
        break;
    case 2:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        printf("difference is %d",a-b);
        break;
    case 3:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        printf("product is %d",a*b);
        break;
    case 4:
        printf("enter two numbers");
        scanf("%d%d",&a,&b);
        printf("Quotient is %d",a/b);
        break;
    case 5:
        exit(0);
    default:
        printf("invalid choice");

    }
    }
    getch();
    return 0;
}
