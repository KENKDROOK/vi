#include <stdio.h>
#include <conio.h>
void main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
        
            if ( year%400 == 0)
                printf("YES");
            else
                printf("NO");
        }
        else
            printf("YES");
    }
    else
        printf("NO");
    
    getch();
}
