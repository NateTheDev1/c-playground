#include <stdio.h>

int main() {
    double minutesInHour = 60;
    double minutesInDay = 1440;
    double minutesInYear = 525600;
    double minutes;

    printf("Enter the number of minutes to convert:\n");
    scanf("%lf", &minutes);
    
    double years;
    double days;
    double hours;

    years = minutes / minutesInYear;
    days = minutes / minutesInDay;
    hours = minutes / minutesInHour;

    printf("It is %lf years\n", years);
    printf("It is %lf days\n", days);
    printf("It is %lf hours", hours);

    return 0;
}