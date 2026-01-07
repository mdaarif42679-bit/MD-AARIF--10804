#include <stdio.h>

int main()
{
    long int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%ld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Formatted Time (HH:MM:SS) = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
