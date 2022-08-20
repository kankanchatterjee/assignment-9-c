/*nested if else to switch case*/

#include<stdio.h>
#include<conio.h>
int main()
{
     int year;
     printf("enter year");
     scanf("%d",&year);
     switch(year%100 == 0)
     {
     case 1 :
        switch(year%400 == 0)
        {
        case 1 :
            printf("leap year");
            break;
        case 0 :
            printf("non leap year");
        }
        break;
      case 0 :
        switch(year%4 == 0)
        {
        case 1 :
                printf("leap year");
                break;
        case 0 :
                printf("non leap year");
        }

    }
    getch();
    return 0;

}
