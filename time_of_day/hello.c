#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    int hour = timeinfo->tm_hour;

    if (hour >= 5 && hour < 12)
        printf("Good morning!\n");
    else if (hour >= 12 && hour < 17)
        printf("Good day!\n");
    else if (hour >= 17 && hour < 21)
        printf("Good evening!\n");
    else if (hour >= 21 && hour <23)
        printf("Good night!\n");
    else
        printf("It's too late, let's go to bed.\n");

    return 0;
}
