#include <stdio.h>
int main() {
    int timeInSeconds, hours, minutes, seconds;
    scanf("%d", &timeInSeconds);
    // Write Solution code below
     hours = timeInSeconds / 3600;         // Calculate the number of hours
     minutes = (timeInSeconds % 3600) / 60; // Calculate the number of minutes
     seconds = timeInSeconds % 60;          // Calculate the number of seconds
    printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);
    return 0;
}