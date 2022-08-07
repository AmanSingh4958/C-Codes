#include <stdio.h>

typedef struct timestamp
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
    char ampm[2];
}timestamp;

int timestampcmp(timestamp ts[]){
    int x = 0;
    for (int i = 0; i < 1; i++)
    {
        if (ts[i].year > ts[i+1].year)
        {
            x++;
            break;
        }
        else if (ts[i].month > ts[i+1].month)
        {
            x++;
            break;
        }
        else if (ts[i].date > ts[i+1].date)
        {
            x++;
            break;
        }
        else if (ts[i].hour > ts[i+1].hour)
        {
            x++;
            break;
        }
        else if (ts[i].min > ts[i+1].min)
        {
            x++;
            break;
        }
        else if (ts[i].sec > ts[i+1].sec)
        {
            x++;
            break;
        }
        else if (ts[i].ampm == "pm")
        {
            x++;
            break;
        }
    }
    return x;
}

int main()
{
    int a;
    timestamp ts[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter date in numeric format = ");
        scanf("%d", &ts[i].date);
        printf("Enter month in numeric format = ");
        scanf("%d", &ts[i].month);
        printf("Enter year in numeric format = ");
        scanf("%d", &ts[i].year);
        printf("Enter hour in numeric format = ");
        scanf("%d", &ts[i].hour);
        printf("Enter minutes in numeric format = ");
        scanf("%d", &ts[i].min);
        printf("Enter seconds in numeric format = ");
        scanf("%d", &ts[i].sec);
        printf("Enter am/pm = ");
        scanf("%s", &ts[i].ampm);
        printf("\n");
    }

    a = timestampcmp(ts);
    if (a>0)
    {
        printf("Timestamp %d/%d/%d %d:%d:%d %s is greater.", ts[0].date, ts[0].month, ts[0].year, ts[0].hour, ts[0].min, ts[0].sec, ts[0].ampm);
    }
    else{
        printf("Timestamp %d/%d/%d %d:%d:%d %s is greater.", ts[1].date, ts[1].month, ts[1].year, ts[1].hour, ts[1].min, ts[1].sec, ts[1].ampm);
    }    

    return 0;
}