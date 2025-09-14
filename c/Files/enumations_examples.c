#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    enum Day today = WEDNESDAY;
    printf("Today is day number: %d\n", today); /* Output: Today is day number: 2*/

    if (today == WEDNESDAY) {
        printf("It's hump day!\n");
    }

    return 0;
}