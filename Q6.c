#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

   void differ(struct time time1, struct time time2);

int main()
{
    struct time time1, time2;

    printf("Enter the frist time (hourse/minutes/second) : ");
    scanf("%d%d%d", &time1.hours,&time1.minutes,&time1.seconds);

    printf("Enter the second time (hourse/minutes/second) : ");
    scanf("%d%d%d", &time2.hours,&time2.minutes,&time2.seconds);

    differ(time1,time2);
}

void differ(struct time time1,struct time time2)
{
    int secondfirst = (time1.hours * 3600 + time1.minutes * 60 + time1.seconds);

    int secondsecond = (time2.hours * 3600 + time2.minutes * 60 + time2.seconds);

    int differnceseco = secondfirst - secondsecond;

    if (differnceseco < 0 )
    {
        differnceseco = -differnceseco;
    }
    
    int hourse = differnceseco / 3600;
    int minutes = (differnceseco % 3600) / 60;
    int seconds = differnceseco % 60;

    printf("The difference in time %d hourse %d minutes %d seconds ", hourse , minutes , seconds);
}

