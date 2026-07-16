#include <stdio.h>

int main() 
{
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Convert time to hours, minutes, and seconds
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}