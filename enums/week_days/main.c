#include <stdio.h>
//create a enum type week
enum week
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

enum months
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    //create a variable of type week
    enum week today;
    today = wednesday;
    printf("Today is %d day of week\n", today);
    printf("Tomorrow is %d day of week\n", today + 1);
    for (int i = Jan; i <= Dec; i++) {
        printf("Month in year is: %d \n", i);
    }
    return 0;
}